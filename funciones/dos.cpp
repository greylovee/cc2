//Implementar un programa que solicite un n´umero n e imprima los n´umero
//desde el 1 hasta n separados por comas. OJO, despues del ´ultimo n´umero no debe imprimir
//la ’,’.


#include <iostream>
using namespace std;
int secuencia(int num)
{
    if (num == 1)
        return 1;
    else
        return (secuencia(num));

}
int main()
{
    int numero;
    cout << " ingrese  el numero "; cin>> numero;
    cout << secuencia(numero)<<","<<numero;
}
