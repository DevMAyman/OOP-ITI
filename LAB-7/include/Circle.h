#ifndef CIRCLE_H
#define CIRCLE_H


class Circle:public Shape{
    Point p;
    int R;
    public:
    Circle(int R, int x, int y, int color):p(x,y),Shape(color){
        (*this).R=R;
    }
    Circle():Shape(){
    }
     Circle(int R){
        (*this).R=R;
    }
        int getR(){
        return (*this).R;
    }
    Point getPoint(){
        return (*this).p;
    }
    Point setPoint(int x, int y){
        p.setXY(x,y);
    }
    void setR(int R){
        (*this).R=R;
    }
     void drawCircle(){
        Shape::draw();
        circle( (*this).getPoint().getX(),(*this).getPoint().getY(),(*this).getR());
        /*getch();*/
    }
};/// End of Circle

#endif // CIRCLE_H
