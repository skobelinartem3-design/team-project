#include <iostream>
#include <string>

void renderTextAnswer() {
    std::cout << "[REZULTAT POISKA]: Nazhmite :q! dlya zaversheniya sessii." << std::endl;
}

void renderImageAnswer() {
    std::cout << "[GOOGLE IMAGES]: Naglyadnaya graficheskaya shema processa:" << std::endl;
    std::cout << "URL: https://gstatic.com" << std::endl;
}

int main() {
    std::string query = "kak vyjti iz vim v 2026 godu";
    std::cout << "================ GOOGLE SEARCH CORE ================" << std::endl;
    std::cout << "Zapros: \"" << query << "\"" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    
    // Konflikt razreshen: vyzyvayutsya oba modulya podryad
    renderTextAnswer();
    renderImageAnswer();
    
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "Najdeno rezultatov: 1 420 000 (za 0.042 sek)" << std::endl;
    return 0;
}
