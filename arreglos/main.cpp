#include <iostream>

using namespace std;

int sumaRec (int a[],int num)
{
    if (num == 0)
        return a[num];
    else{
        num--;
        return a[num+1] + sumaRec(a,num);}

}
void sumaArr (int v[],int tam)
{
    int total = 0;
    for ( int i = 0 ; i < v[tam] ; i++)
        total+= v[i];
    cout <<total ;

}

int tamano(char cad[])
{
    int tam =0;
    for(int i=0; cad[i]!='\0';i++)
    {
        tam++;
    }
    return tam;
}
void strcpy(char s[],char t[])
{
    for(int i=0;t[i]!='\0';i++)
    {
        s[i]=t[i];
    }

}
//concatenar caracteres
void conc(char s[],char t[])
{
    int a;
    for(int i=0;t[i]!='\0';i++)
    {
        a=tamano(s);

        s[a]+=t[i];
    }


}

int main()
{
    int l[]= {1,2,3,4,5};
    int m=4;
    cout<< sumaRec(l,m);
    cout << '\n';
    char s[20]="atletico";
    char t[]="demadrid";
    conc(s,t);
    cout << s;


}
