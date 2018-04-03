
//Implemente un programa que solicite un numero de cinco digitos e imprima los digitos separados por un caracter de tabulacion.


#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<" Ingrese un numero de 5 cifras  :"; cin >> num;
    int d=num/10000;
    cout<<d<<",";
    d=num/1000%10;
    cout<<d<<",";
    d=num/100%10;
    cout<<d<<",";
    d=num/10%10;
    cout<<d<<",";
    d=num%10;
    cout<<d;
}
