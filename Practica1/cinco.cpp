
//Implemente un programa que solicite un numero y evalue si dicho numero es primo.

#include <iostream>
using namespace std;
int main ()
{
    int a=0,n;
    cout<<"Ingrese numero  " ;
    cin>>n;
    for(int i=1;i<=n;i++){
    if(n%i==0)
        a++;
    }
    if(a==2)
        cout<<"Si es Primo";
    else
        cout<<"No es Primo";
}
