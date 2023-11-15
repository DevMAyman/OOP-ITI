#ifndef LINE_H
#define LINE_H


class Line:public Shape{
    Point pl,pr;
    public:
    Line(int plx,int ply,int prx,int pry, int color):pl(plx,ply),pr(prx,pry),Shape(color){
    }
    Line():Shape(){
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
        line((*this).getLeftPoint().getX(),(*this).getLeftPoint().getY(),(*this).getRightPoint().getX(),(*this).getRightPoint().getY());
        /*getch();*/
    }

}; /// End of line


#endif // LINE_H
