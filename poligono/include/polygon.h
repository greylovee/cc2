#ifndef POLYGON_H
#define POLYGON_H


class polygon
{
   protected :
       int width, height;
   public:
       polygon (int a,int b) : width(a),height (b) {}
        //void set_values(int a,int b);
        virtual int area(void)=0;
        void printarea();

};

#endif // POLYGON_H
