#include <iostream>
using namespace std;
class Vehicle
{
public:
    virtual void useVehicle() = 0;
};
class FordFigo : public Vehicle // uso de herencia y polimorfismo
{
public:
    void useVehicle()
    {
        cout << "Manejando en FordFigo" << endl;
    }
};
class TataNano : public Vehicle
{
public:
    void useVehicle()
    {
        cout << "Manejando en TataNano" <<endl;
    }
};
class BlackPulsar : public Vehicle
{
public:
    void useVehicle()
    {
        cout << "Paseando en BlackPulsar" << endl;
    }
};
class HondaActiva : public Vehicle
{
public:
    void useVehicle()
    {
        cout << "Paseando en HondaActiva" << endl;
    }
};



class persona
{
public:
    Vehicle *myVehicle;
    virtual void display() = 0;
    void setVehicle(Vehicle *v){myVehicle = v;}
    void driveVehicle(){myVehicle->useVehicle();}
};
class soltero : public persona
{
public:
    virtual void display()
    {
        cout << "yo soy soltero" << endl;
    }
};


int main()
{
    persona *sol = new soltero();
    sol->display();
    sol->setVehicle(new FordFigo());
    sol->driveVehicle();



    return 0;
}
//Arreglo Dinámico
class arreglo
{
    int size;
    int *data;
    public:
        arreglo(int size, int arr[]){
             this -> size = size;
            this -> data = new int [size];
            for (int i=0; i<size ; i++){
            data [i]= arr [i];
            }
        }
        void insertarAtras(int elem){
            int *nuevo = new int [size++];
            size++;
            for (int i=0; i< size-1; i++){
                nuevo[i]= data[i];
            }
            nuevo[size-1]=elem;
            delete[] data;
            data=nuevo;
        }
};
int main () 
{
    int arr[]= {4,2,3,6,8};
    arreglo a(5,arr);
    a.insertasAtras(7);
}
//Uso de templates 
class Vector
{
    private:
        T * Pvec; // Variable tipo T como puntero
        int indi; // Controla el índice del vector
        int elemen; // Numero de elementos del vector

    public:
 // constructor inicializa el vector cuando se crea
        Vector(int n)
        {   Pvec = new T[n]; // Reserva un espacio de memoria
            indi = 0; // Es el índice del vector
            elemen = n; // Numero de elementos que posee
 };
  //   Destructor libera memoria

        ~Vector( )

        {

            delete [] Pvec;

        }

 // Sobrecarga de operador []

        T& operator [] (int i)

        { return Pvec[i];

        }

 // Agrega un nuevo elemento

        void agregar(T i)

        { Pvec[indi++]=i;

        }

 // Función estallena, verifica si el vector tiene elementos

        bool estallena( )

        { return (indi >= elemen);

        }

 // Función vervector elementos que posee

        void vervector()

        {       cout << "Elementos del vector..." << endl;

                for(int i = 0; i < indi; i++)

                    cout << "--> " << Pvec[i] << endl;

        }

};

void opciones( )

{ cout << "1. Agregar elemento" << endl;

 cout << "2. Espacio del vector" << endl;

 cout << "3. Ver Vector" << endl;

 cout << "4. Salir " << endl;

 cout << "Seleccione :";

}

int main( ){

    Vector <int> V(5); // Definiendo la variable vector de tipo entero

    int ele;

    int opc;

    do

    {   opciones();

        cin >> opc;

        switch(opc)

        { case 1:

            cout << "Digitar elemento a agregar:";

            cin >> ele;

            V.agregar(ele);

            system("cls");

            break;

        case 2:

            if (V.estallena())

                cout << "El vector esta lleno..." << endl;

            else

                cout << "El Vector esta vacio..." << endl;

            break;

        case 3:

            V.vervector();

            break;

        }

    }while(opc != 4);

    system("pause");

    return 0;

}
