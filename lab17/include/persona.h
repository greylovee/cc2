#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;

class persona
{
    public:
        string nombre;
        int edad;
        persona(string n, int e);
        void cambiarNombre(string n);
        void cambiarEdad(int e);
        string consultarNombre();
        int consultarEdad();
        bool esMayordeEdad();
};

#endif // PERSONA_H
