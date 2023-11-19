#include <iostream>
#include <graphics.h>
#include "Point.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangular.h"
#include "Line.h"
#include "overloadFun.h"
using namespace std;
int main()
{
   int numberOfShapes=0;
   cout<<"Enter number of shapes"<<endl;
   cin>>numberOfShapes;
   Shape * Shapes[numberOfShapes];
   cout<<"Enter a number represent the shape hence 1->line, 2->rect, 3->circle"<<endl;
   int typeOfShape=0;
   for (int i=0;i< numberOfShapes; i++){
       cout<<"Enter the "<<i+1<<" shape"<<endl;
        cin>>typeOfShape;
        if(typeOfShape!=1 && typeOfShape!=2 && typeOfShape!=3){
            cout<<"Please enter a number from 1 to 3"<<endl;
            i--;
        }
        if(typeOfShape==1){
            cout<<"Enter the data of line"<<endl;
            Line * l = new Line();
            cin>>l;
            Shapes[i]=l;

        }
        else if(typeOfShape==2){
            cout<<"Enter the data of Rectangule"<<endl;
             Rectangular *r= new Rectangular();
            cin>> r;
            Shapes[i]=r;
        }
        else if(typeOfShape==3){
            cout<<"Enter the data of Circle"<<endl;
             Circle * r = new Circle();
            cin >> r;
            Shapes[i]=r;
        }
   }

   initwindow(650,650);
   for(int i=0;i<numberOfShapes;i++){
    (*(Shapes[i])).draw();
   }
   getch();
   closegraph();

    return 0;
}



