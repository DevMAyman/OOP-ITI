#ifndef POINT_H
#define POINT_H


class Point{
int x;
int y;
public:
    Point(int x=0, int y=0){
            (*this).x=x;
            (*this).y=y;
    }


    int getX(){
        return (*this).x;
    }
    int getY(){
        return (*this).y;
    }
    void setX(int x){
        (*this).x=x;
    }

    void setY(int y){
        (*this).y=y;
    }

    void setXY(int x,int y){
        (*this).x=x;
        (*this).y=y;
    }

};/// End of Point
#endif // POINT_H
