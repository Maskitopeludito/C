#include "Pila.hpp"
#include <iostream>

Pila::Pila() {
    ultimo = NULL;
    longitud = 0;
}

Pila::~Pila() {
    pnodoPila aux;
    while (ultimo) {
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
}

void Pila::insertar(int v) {
    pnodoPila nuevo;
    nuevo = new NodoPila(v, ultimo);
    ultimo = nuevo;
    longitud++;
}

int Pila::extraer() {
    if (!ultimo) {
        return 0;
    }
    pnodoPila nodo;
    int v;
    nodo = ultimo;
    ultimo = nodo->siguiente;
    v = nodo->valor;
    longitud--;
    delete nodo;
    return v;
}

int Pila::cima() {
    if (!ultimo) {
        return 0;
    }
    return ultimo->valor;
}

void Pila::mostrar() {
    pnodoPila aux = ultimo;
    std::cout << "\tEl contenido de la pila es: ";
    while (aux) {
        std::cout << " -> " << aux->valor;
        aux = aux->siguiente;
    }
    std::cout << std::endl;
}

int Pila::getLongitud() {
    return this->longitud;
}

