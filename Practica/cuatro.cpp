//Implemente un programa que solicite dos numeros y evalue:
//a) Si el primer y el segundo n�umero son m�ultiplos de 2.
//b) Si el primer n�umero es m�ultiplo del segundo.
//c) Si el primer elevado al cuadrado tiene como resultado el segundo.

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int num1,num2;
    cout<<"ingrese los numeros  ";
    cin>> num1;
    cin>>num2;
    if(num1 % 2 ==0){
        if (num2 % 2== 0)
            cout<<" a) AMBOS SON MULTIPLOS DE 2"<<endl;}
    else
        cout<<" a) NO SON MULTIPLO DE 2"<<endl;
    if (num1 % num2 == 0)
        cout<< " b)ES MULTIPLO DEL PRIMERO"<<endl;
    else
        cout <<" b)NO ES MULTIPLO DEL PRIMERO"<<endl;
   int potencia = pow(num1,2);

    if (potencia == num2)
        cout <<" c) EL CUADRADO DEL PRIMERO ES IGUAL AL SEGUNDO NUMERO"<<endl;
    else
        cout<<" c) EL CUADRADO DEL PRIMERO NO ES IGUAL AL SEGUNDO "<<endl;

}
