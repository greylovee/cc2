#ifndef ARREGLO_H
#define ARREGLO_H


class arreglo
{
    int size;
    int *data;
    public:
        arreglo(int size, int arr[]);
        void insertarAtras(int elem);
        void mostrar();
        void insertar(int pos, int elem);
        void eliminar(int pos);
        void vaciar();
        //void ordenarAs();
        //void ordenarDes();
        //void primos();
        void mayor();
        void menor();
        ~arreglo();

};

#endif // ARREGLO_H
