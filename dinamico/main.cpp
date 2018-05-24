#include <iostream>
#include "arreglo.h"

using namespace std;

int main()
{
    int arr[]= {4,2,3,6,8};
    arreglo a(5,arr);
    /*a.mostrar();
    cout<<"\n";
    a.insertarAtras(7);
    a.mostrar();
    cout<<"\n";
    a.insertar(1,3);
    a.mostrar();
    cout<<"\n";
    a.eliminar(2);
    a.mostrar();
    *///a.vaciar();
    a.mayor();
    a.menor();



}
