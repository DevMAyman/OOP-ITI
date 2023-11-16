#ifndef RECTANGULAR_H
#define RECTANGULAR_H

class Rectangular:public Shape{
    Point pl,pr;
    public:
    Rectangular(int plx,int ply,int prx,int pry,int color):pl(plx,ply),pr(prx,pry),Shape(color){
    }
    Rectangular():Shape(){
        //Empty
    }
    Point getLeftPoint(){
        return (*this).pl;
    }
    Point getRightPoint(){
        return (*this).pr;
    }

    Point setLeftPoint(int x, int y){
        pl.setXY(x,y);
    }
    Point setRightPoint(int x, int y){
        pr.setXY(x,y);
    }

     void draw(){
        Shape::draw();
        rectangle((*this).getLeftPoint().getX(),(*this).getLeftPoint().getY(),(*this).getRightPoint().getX(),(*this).getRightPoint().getY());
        /*getch();*/
    }

}; /// End of rectandular

#endif // RECTANGULAR_H
