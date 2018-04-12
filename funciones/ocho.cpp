//Implemente un programa que solicite un numero de cinco digitos e indique si se trata de un palindrome.
//Tome en cuenta que un palindrome cuando se lee de derecha a
//izquierda es lo mismo que leerlo de izquierda a derecha, 12321 es un palindrome y 12345 no es un palindrome.


#include <iostream>
using namespace std;
bool palindromo (int num)
{
    int a=num/10000;
    int b=num/1000%10;
    int c=num/100%10;
    int d=num/10%10;
    int e=num%10;
    if(a == e){
        if (b == d)
            if (c== c)
                return true;}
    return false;
}
int main()
{

    cout << palindromo(33333);

}





