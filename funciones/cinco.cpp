
//Implemente un programa que solicite un numero y evalue si dicho numero es primo.

#include <iostream>
using namespace std;
bool primos(int n){
    int a=0;
    for(int i=1;i<=n;i++){
    if(n%i==0)
        a++;
    }
    if(a==2)
        return true;
    else
        return false;
}
int main ()
{
    int numero;
    cout << "ingrese numero a evaluar "; cin >> numero;
    cout << primos(numero);
}
