#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
    // Création d'un fichier assembleur de test
    std::ofstream out("test.s");
    if (!out) {
        std::cerr << "Erreur : impossible de créer test.s" << std::endl;
        return 1;
    }

    out << "section .text\n";
    out << "global main\n";
    out << "main:\n";
    out << "    mov rax, 3\n";
    out << "    add rax, 4\n";
    out << "    ret\n";
    out.close();

    std::cout << "Fichier assembleur test.s généré avec succès." << std::endl;
    return 0;
}
