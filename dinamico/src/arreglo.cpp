#include "arreglo.h"
#include <iostream>
using namespace std;

arreglo::arreglo(int size, int arr[])
{
    this -> size = size;
    this -> data = new int [size];
    for (int i=0; i<size ; i++){
        data [i]= arr [i];
    }
}

void arreglo :: insertarAtras(int elem)
{
    int *nuevo = new int [size++];
    size++;
    for (int i=0; i< size-1; i++){
        nuevo[i]= data[i];
    }
    nuevo[size-1] =elem;
    delete[] data;
    data=nuevo;
    //this -> insertar(size,elem);

}
void arreglo :: mostrar()
{
    for (int i= 0; i< size-1 ; i++)
        cout << data[i]<<" " ;
}
void arreglo :: insertar (int pos, int elem)
{
    int *nuevo = new int [size++];
    for(int i = 0; i< pos;i++)
        nuevo[i]= data [i];
    nuevo[pos]= elem;
    for ( int i = pos; i< size ;i++)
        nuevo[i+1]= data[i];
    delete[]data;
    data = nuevo;
}
void arreglo :: eliminar (int pos)
{
    for (int i=0; i<pos ; i++)
        delete[]data;
        //data = nuevo;

}
~areglo :: arreglo
{
    delete[] data;
}
