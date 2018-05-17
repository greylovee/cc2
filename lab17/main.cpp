#include <iostream>
#include "persona.h"
using namespace std;

int main()
{
    persona p ("luis",30);
    p.cambiarNombre("marco");
    p.cambiarEdad(50);
    //p.esMayordeEdad();
    persona *ptr =&p;
    cout << ptr-> esMayordeEdad();
    persona *pr[5];
    // crear un arreglo de punteros a persona, y ordene en base de la edad










}
