#ifndef PILACARAC_H
#define PILACARAC_H

const int TAM_MAX = 200;

class PilaCarac {
private:
    char Elementos[TAM_MAX];
    int cima;

public:
    PilaCarac();

    bool estaVacia() const;
    bool estaLlena() const;
    bool apilar(char caracter);
    bool desapilar(char& caracter);
    void vaciar();
};

#endif