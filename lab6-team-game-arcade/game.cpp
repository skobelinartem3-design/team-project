#include <cstdlib>
#include <ctime>
#include <iostream>

constexpr int MAX_HP = 100;
int hp = MAX_HP;
int resources = 50; // Крышки
long long score = 0;
int turn = 1;

void riskyRaid();
void camp();
void fortuneEvent();

void printHUD() {
    std::cout << "\n================ [ХОД: " << turn << " | СЧЕТ: " << score
              << "] ================\n";
    std::cout << "Здоровье: " << hp << "/" << MAX_HP
              << " | Крышки: " << resources << "\n";
    std::cout << "--------------------------------------------------------\n";
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int choice = 0;

    std::cout << ">>> ПУСТОШЬ: БИТВА ЗА РЕКОРД <<<\n";
    while (hp > 0) {
        printHUD();
        std::cout << "1. Рейд в логово мутантов (высокая награда / высокий риск)\n";
        std::cout << "2. Убежище (лечение за крышки)\n";
        std::cout << "3. Рулетка Пустоши (D20)\n";
        std::cout << "0. Сдаться и зафиксировать счет\n";
        std::cout << "Выберите действие > ";

        if (!(std::cin >> choice)) {
            break;
        }

        bool completedAction = false;
        switch (choice) {
        case 1:
            riskyRaid();
            completedAction = true;
            break;
        case 2:
            camp();
            completedAction = true;
            break;
        case 3:
            fortuneEvent();
            completedAction = true;
            break;
        case 0:
            hp = 0;
            break;
        default:
            std::cout << "\nНеизвестная команда! Выберите 0, 1, 2 или 3.\n";
            break;
        }

        if (hp > 0 && completedAction) {
            ++turn;
            score += 10;
        }
    }

    std::cout << "\nИГРА ОКОНЧЕНА. Итоговый рекорд: " << score << " очков!\n";
    return 0;
}

void riskyRaid() {
    std::cout << "\n[!] Модуль рейда ещё в разработке (Issue #1).\n";
}

void camp() {
    std::cout << "\n[!] Модуль убежища ещё в разработке (Issue #2).\n";
}

void fortuneEvent() {
    std::cout << "\n[!] Модуль рулетки ещё в разработке (Issue #3).\n";
}
