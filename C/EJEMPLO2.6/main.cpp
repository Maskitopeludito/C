#include <iostream>
#include <string.h> // Para strcpy

using namespace std;

struct persona {
    char nombre[30];
    int edad;
    long telefono;
};

// Función para crear una persona
persona CrearPersona(const char* n, int e, long t) {
    persona aux;
    strcpy(aux.nombre, n); // la cadena n se copia en aux.nombre
    aux.edad = e;
    aux.telefono = t;
    return aux;
}

// Paso por valor
void Escribir(persona p) {
    cout << p.nombre << " tiene " << p.edad << " anyos y su telefono es " << p.telefono;
    cout << endl;
}

// Paso mediante puntero
void EscribirPuntero(persona* p) {
    cout << p->nombre << " tiene " << p->edad << " anyos y su telefono es " << p->telefono;
    cout << endl;
}

int main(int argc, char** argv) {
    persona ejemplo;

    ejemplo = CrearPersona("Jesus", 99, 123456789);
    cout << "Paso por valor" << endl;
    Escribir(ejemplo);
    cout << endl;

    ejemplo = CrearPersona("Mario", 55, 987654321);
    cout << "Paso con punteros" << endl;
    EscribirPuntero(&ejemplo);

    return 0;
}