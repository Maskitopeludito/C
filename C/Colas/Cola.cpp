#include "Cola.hpp"
#include <iostream>

Cola::Cola() {
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}

Cola::~Cola() {
    while (primero) {
        eliminar();
    }
}

void Cola::insertar(int v) {
    pnodoCola nuevo;
    nuevo = new NodoCola(v);
    if (ultimo) {
        ultimo->siguiente = nuevo;
    }
    ultimo = nuevo;
    if (!primero) {
        primero = nuevo;
    }
    longitud++;
}

int Cola::eliminar() {
    if (!primero) {
        return 0;
    }
    pnodoCola nodo;
    int v;
    nodo = primero;
    primero = nodo->siguiente;
    v = nodo->valor;
    delete nodo;
    if (!primero) {
        ultimo = NULL;
    }
    longitud--;
    return v;
}

int Cola::verPrimero() {
    if (!primero) {
        return 0;
    }
    return primero->valor;
}

void Cola::mostrar() {
    pnodoCola aux = primero;
    std::cout << "\tEl contenido de la cola es: ";
    while (aux) {
        std::cout << " -> " << aux->valor;
        aux = aux->siguiente;
    }
    std::cout << std::endl;
}
