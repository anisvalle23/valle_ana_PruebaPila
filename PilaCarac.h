#ifndef PILACARAC
#define PILACARAC

const int TAM_MAX = 200;

class PILACARAC {
private:
    char Elementos[TAM_MAX];
    int cima;

public:
    PILACARAC();

    bool estaVacia() const;
    bool estaLlena() const;
    bool apilar(char caracter);
    bool desapilar(char& caracter);
    void vaciar();  
};

#endif