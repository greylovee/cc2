//Implemente un programa que solicite un numero de cinco digitos e indique si se trata de un palindrome.
//Tome en cuenta que un palindrome cuando se lee de derecha a
//izquierda es lo mismo que leerlo de izquierda a derecha, 12321 es un palindrome y 12345 no es un palindrome.


#include <iostream>
using namespace std;

int main()
{
    int numero,p,s,t,c,m;
    cout<<"ingrese un numero "; cin>>numero;
    p=numero%10;
    s=p/10;
    c=s/10;
    m=p*100+t*10+c;
    if (m=numero)
        cout<<"El Numero es Palindromo\n";

    else
    cout<<"El Numero no es Palindromo\n";

}





