#include <iostream>
#include "arreglo.h"

using namespace std;

int main()
{
    int arr[]= {1,2};
    arreglo a(2,arr);
    a.insertarAtras(5);
    a.insertar(1,3);
    a.mostrar();


}
