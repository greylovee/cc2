//Implemente un programa que solicite dos numeros y evalue:
//a) Si el primer y el segundo n´umero son m´ultiplos de 2.
//b) Si el primer n´umero es m´ultiplo del segundo.
//c) Si el primer elevado al cuadrado tiene como resultado el segundo.

#include <iostream>

using namespace std;
bool  MultCuad(int num,num2)
{
    if(num1 % 2 ==0){
        if (num2 % 2== 0)
            return true;
    else
        cout<<" a) NO SON MULTIPLO DE 2"<<endl;
    if (num1 % num2 == 0)
        cout<< " b)ES MULTIPLO DEL PRIMERO"<<endl;
    else
        cout <<" b)NO ES MULTIPLO DEL PRIMERO"<<endl;
   int potencia = num1*num1;

    if (potencia == num2)
        cout <<" c) EL CUADRADO DEL PRIMERO ES IGUAL AL SEGUNDO NUMERO"<<endl;
    else
        cout<<" c) EL CUADRADO DEL PRIMERO NO ES IGUAL AL SEGUNDO "<<endl;

    }
int main ()
{


}
