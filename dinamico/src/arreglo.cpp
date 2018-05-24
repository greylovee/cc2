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
    /*int *nuevo = new int [size++];
    size++;
    for (int i=0; i< size-1; i++){
        nuevo[i]= data[i];
    }
    nuevo[size-1]=elem;
    delete[] data;
    data=nuevo;*/
    this -> insertar(size,elem);

}
void arreglo :: mostrar()
{
    for (int i= 0; i< size ; i++)
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
    int *nuevo= new int [size-1];
    size--;
    for(int i=0;i<pos;i++){
        nuevo[i]=data[i];
    }
    for(int i=pos;i<size;i++)
    {
        nuevo[i]=data[i+1];
    }
    delete[]data;
    data=nuevo;

}
void arreglo :: vaciar ()
{
    int *nuevo = new int[0];
    delete []data;
    data= nuevo;
    size = 0;

}

void arreglo::mayor()
{
    int mayor = data[0];
    for (int i=0;i<size ;i++){
        if(mayor <=data[i]){
           mayor=data[i];
           }
    }
    cout<< mayor<<endl;
}
void arreglo :: menor()
{
    int menor = data[0];
    for (int i=0; i<size ; i++){
        if(menor >= data[i]){
            menor = data[i];
        }
    }
    cout<<menor<<endl;
}
arreglo::~arreglo(){
    delete []data;
}
