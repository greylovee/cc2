//Implemente un programa que solicite el ingreso de 3 numeros e imprima: (i)
//el menor, (ii) el mayor y (iii) el promedio de dichos numeros.

#include <iostream>
using namespace std;
int main ()
{
    int num1,num2,num3;
    cout<<"ingrese los tres numeros  :";
    cin>>num1;
    cin>>num2;
    cin>> num3;

    if (num1 > num2 && num1 > num3)
        cout<<"el mayor es "<<num1<<endl;
    if (num2 > num1 && num2 > num3)
        cout << "el mayor es"<<num2<<endl;
    if (num3 > num1 && num3 > num2)
        cout <<"el mayor es "<<num3<<endl;
    if (num1 < num2 && num1 < num3)
        cout <<" el menor es "<<num1<<endl;
    if (num2 < num1 && num2 < num3)
        cout <<" el menor es " <<num2<<endl;
    if (num3 < num1 && num3 < num2)
        cout << " el menos es "<<num3<<endl;


   int  prom;
    prom = (num1+num2+num3)/3;

    cout <<" El promedio es "<<prom<<endl;


}
