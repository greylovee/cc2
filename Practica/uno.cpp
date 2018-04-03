
//implementar un programa que evalue si la edad ingresada por el teclado se refiere a una persona mayor o menor de edad

#include <iostream>
using namespace std;

int main()
{
    int edad1;
    cout<<"Ingrese por favor la primera edad  :  ";
    cin>>edad1;

    if(edad1 >=  18)
        cout<<" Usted es una persona de +18 "<<endl;
    else
        cout<<" Usted todavia tiene DNI amarillo"<<endl;
}
