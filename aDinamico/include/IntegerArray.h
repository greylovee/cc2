#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H


class IntegerArray
{
    public:
        int *data;
        int size;
        IntegerArray(int size){
            data  = new int[size];
            this -> size = size;
            }
        IntegerArray( IntegerArray &o){
            data = new int[o.size];
            size = o.size;
            for(int i = 0;i < size ; ++i)
                data[i] = o.data[i];
            }
        ~IntegerArray(){
            delete[] data;
        }

};

#endif // INTEGERARRAY_H
