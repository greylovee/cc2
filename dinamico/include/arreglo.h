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
        ~arreglo();

};

#endif // ARREGLO_H
