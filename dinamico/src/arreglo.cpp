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
    delete []data;
    data= new int[0];
    size = 0;

}
void arreglo :: ordenarAs()
{

     for (int i = size - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if(data[j]> data[j+1]){
                data[size]=data[j];
                data[j]=data[j+1];
                data[j+1]=data[size];
            }
        }
     }
}
void arreglo :: ordenarDes()
{
    for (int i = size - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if(data[j]< data[j+1]){
                data[size]=data[j];
                data[j]=data[j+1];
                data[j+1]=data[size];
            }

        }
    }
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
void arreglo :: promedio()
{
    float suma=0.0;
    for(int i=0;i<size;i++)
    {
        suma=suma+data[i];
    }
    cout<<"el promedio es: "<<suma/2.0<<endl;
}

void arreglo :: primos ()
{
    for(int i=0;i<size;i++){
        int x=0;
        for(int j=1;j<data[i]+1;j++){
            if(data[i]%i==0)
                x++;
        }
    }
    if(x!=2)
        cout<< ",";
    else
        cout<<data[i];

}
void arreglo :: menorPrimo()
{
    int *nuevo = new int [size];
    for(int i=0;i<size;i++){
        int x= 0;
        for(int j=1;j<data[i]+1j++){
            if(data[i]%j==0)
                x++;
        }

    if(x!=2)
        cout<< ",";
    else
        nuevo[i]= data[j];
    }
    int menor=nuevo[0];
    for(int i=0; i<size ;i++ ){
        if(nuevo[i] < menor ){
            menor=nuevo[i];
        }
    }
    delete[]data;
    cout << menor;
}
void arreglo :: mayorPrimo()
{
    int *nuevo = new int [size];
    for (int i=0;i<data[i]+1;i++){
        if(data[j]%i==0){
            x++;
        }

    if(x!=2)
        cout << ",";
    else
        nuevo[i]= data[i];
    }
    int mayor = nuevo[0];
    for(int i = 0;i<tam ; i++){
        if (nuevo[i]>mayor){
            mayor=nuevo[i];
        }
    }
    delete[]data;
    cout<<mayor;
}
void arreglo :: siPrimo(int pos)
{
    int x=0;
    for(int i=1;i<data[pos]+1;i++){
        if(data[pos]%i==0)
            x++;
    }
    if(x!=2)
        cout << "no es primo" << endl;
    else
        cout << "es primo" <<endl;
}

arreglo::~arreglo(){
    delete []data;
}
