
//implementar un programa que evalue si la edad ingresada por el teclado se refiere a una persona mayor o menor de edad

#include <iostream>
using namespace std;

bool esMayor(int edad){
    if (edad >=18)
        return true;
    else
        return false ;
    }

int main()
{
    cout << esMayor(30)<< endl;
    return 0;

}
