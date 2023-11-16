#ifndef SHAPE_H
#define SHAPE_H


class Shape{
    protected:
int color;

    public:
        Shape(int color){
    (*this).color=color;
}
Shape(){
}
        void setColor(int color){
            (*this).color=color;
        }
        int getColor(){
            return (*this).color;
        }
        virtual void draw(){
            setcolor((*this).color);
        }
};/// End of Shape

#endif // SHAPE_H
