#ifndef POLYGON_H
#define POLYGON_H


class polygon
{
   protected :
       int width, height;
   public:

        //1//void set_values(int a,int b);
        //2//virtual int area ();
        //3//virtual int area (void) =0 ;
         polygon (int a,int b) : width(a),height (b) {}
        int area(void){ return 0;};
        void printarea();

};

#endif // POLYGON_H
