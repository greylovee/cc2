//Implementar un programa que solicite un n´umero n e imprima los n´umero
//desde el 1 hasta n separados por comas. OJO, despues del ´ultimo n´umero no debe imprimir
//la ’,’.


#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"ingrese un numero  :";
    cin>>num;
    for(int i=1; i <= num;i++ )
        cout<<i<<",";

}
