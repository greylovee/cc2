#include <iostream>

using namespace std;
//UNO
void numeroPerfecto(int num)
{
    int suma  = 0;
    for (int i = 1; i < num; i++)
        if (num % i == 0)
            suma +=i;
        if (suma == num)
            cout << "EL NUMERO ES PERFECTO " << endl;
        else
            cout << "EL NUMERO NO ES PERFECTO" << endl;
}
void rangoPerfecto ()
{
    int suma = 0; int num = 10000;
    for ( int i = 5;i <= num; i++){
        for (int j = 1; j<i; j++){
            if ( i % j == 0)
                suma+= i;
                if ( suma == i)
                    cout << j;
        }
    }
}
// DOS
void primos (int num)
{
    int cont = 0;
    for (int i  = 1 ; i<= num; i++){
        if (num % i == 0 )
            cont ++;}
        if ( cont == 2)
             cout << " ES PRIMO "<< endl;
        else
            cout << " NO ES PRIMO "<< endl;
}
void menPrimos(int num)
{
    int res=0,cont=0;
    for(int i=1;i<=num;i++)
      {
        for(int j=1;j<=i;j++)
        {
          res=i%j;
          if(res==0)
          {
            cont++;
          }
        }
        if(cont==2)
        {
          cout<<" "<<i;
        }
        cont=0;
      }
}

// TRES

int potencia(int base,int exponente)
{
    if (exponente == 0)
        return 1;
    else
        return base* potencia (base, exponente-1);

}
 // CUATRO
 void intercambio ( int num,int num2)
 {
     num = num + num2;
     num2 = num - num2;
     num = num - num2;
     cout << " numero 1 es  "<< num<< endl;
     cout << " numero 2 es  "<< num2<<endl;
 }
//void intercambioBits ( int num , int num)
int main()
{
    numeroPerfecto(5);
    //rangoPerfecto();
    primos(8);
    int numero;
    cout << "Ingrese numero : " ; cin >> numero;
    menPrimos(numero);
    cout << '\n';
    cout <<" la potencia es : "<< potencia(4,2);
    cout << '\n';
    intercambio(5,6);

}
