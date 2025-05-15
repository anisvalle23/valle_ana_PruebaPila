#include <iostream>
#include <string>
#include <cctype>
#include "PilaCarac.h"

bool esPalindromo(std::string fraseOriginal) {
    PilaCarac pila;
    std::string fraseFiltrada = "";

    for (int i = 0; i < fraseOriginal.length(); i++) {
        char c = fraseOriginal[i];

        if (isalnum(c)) {
            c = tolower(c); 
            fraseFiltrada = fraseFiltrada + c;
            pila.apilar(c);
        }
    }

    if (fraseFiltrada.length() == 0) {
        return false; 
    }

    for (int i = 0; i < fraseFiltrada.length(); i++) {
        char caracterDesdePila;
        pila.desapilar(caracterDesdePila);

        if (fraseFiltrada[i] != caracterDesdePila) {
            return false;
        }
    }

    return true;
}

bool contieneCaracteresValidos(std::string frase) {
    for (int i = 0; i < frase.length(); i++) {
        if (isalnum(frase[i])) {
            return true;
        }
    }
    return false;
}

int main() {
    std::string frase;

    while (true) {
        std::cout << "\nFRASE (o escribe FIN para salir): ";
        std::getline(std::cin, frase);

        if (frase == "FIN" || frase == "fin") {
            std::cout << "PROGRAMA TERMINADO\n";
            break;
        }

        if (!contieneCaracteresValidos(frase)) {
            std::cout << "INGRESE UNA PALABRA O FRASE:\n";
            continue;
        }

        if (esPalindromo(frase)) {
            std::cout << "LA FRASE ES UN PALINDROMO\n";
        } else {
            std::cout << "LA FRASE NO ES UN PALINDROMO\n";
        }
    }

    return 0;
}