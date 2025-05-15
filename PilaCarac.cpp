#include "PilaCarac.h"

PilaCarac::PilaCarac() {
    cima = -1;
}

bool PilaCarac::estaVacia() const {
    return cima == -1;
}

bool PilaCarac::estaLlena() const {
    return cima == TAM_MAX - 1;
}

bool PilaCarac::apilar(char caracter) {
    if (estaLlena()) {
        return false;
    }

    cima++;
    Elementos[cima] = caracter;
    return true;
}

bool PilaCarac::desapilar(char& caracter) {
    if (estaVacia()) {
        return false;
    }

    caracter = Elementos[cima];
    cima--;
    return true;
}

void PilaCarac::vaciar() {
    cima = -1;
}