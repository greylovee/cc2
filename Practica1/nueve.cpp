
//Implemente un programa que evalue si un año es bisiesto.

#include <iostream>
using namespace std;
int main ()
{

    int anho;
    cout<<"ingrese el anho "; cin>> anho;
    if (anho%4 == 0 && (anho%100!= 0  || anho%4==0))
        cout<<"anho bisiesto"<<endl;
    else
        cout<<"anho no bisiesto"<<endl;
}
