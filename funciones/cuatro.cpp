//Implemente un programa que solicite dos numeros y evalue:
//a) Si el primer y el segundo n´umero son m´ultiplos de 2.
//b) Si el primer n´umero es m´ultiplo del segundo.
//c) Si el primer elevado al cuadrado tiene como resultado el segundo.

#include <iostream>

using namespace std;
#include <iostream>

using namespace std;
bool  MultCuad(int num1,int num2)
{
    if(num1 % 2 ==0){
        if (num2 % 2== 0)
            return true;
        return false;
    if (num1 % num2 == 0)
        return true;
    return false;
    int potencia = num1*num1;
    if (potencia == num2)
        return true;
    else
        return false;
    }
}
int main ()
{
    int numero, numero2;
    cout << " ingrese numeros  a evaluar "; cin>>numero;
    cin>> numero2;
    cout << MultCuad(numero,numero2);


}
