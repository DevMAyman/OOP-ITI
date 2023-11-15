#include <iostream>
#include <graphics.h>
#include "Point.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangular.h"
#include "Line.h"
using namespace std;
istream & operator >> (istream &in,  Line &l);
istream & operator >> (istream &in,  Rectangular &l);
istream & operator >> (istream &in,  Circle &l);
int main()
{
   int numberOfShapes=0;
   cout<<"Enter number of shapes"<<endl;
   cin>>numberOfShapes;
   int arrayOfShapes[numberOfShapes];
   cout<<"Enter a number represent the shape hence 1->line, 2->rect, 3->circle"<<endl;
   for (int i=0;i< numberOfShapes; i++){
    cout<<"Enter the "<<i+1<<" shape"<<endl;
    cin>>arrayOfShapes[i];
    if(arrayOfShapes[i]!=1 && arrayOfShapes[i]!=2 && arrayOfShapes[i]!=3){
        cout<<"Please enter a number from 1 to 3"<<endl;
        i--;
    }
   }
   int countOfLine=0;
   int countOfCircle=0;
   int countOfRect=0;
   Line arrayOfLines[numberOfShapes];
   Circle arrayOfCircles[numberOfShapes];
   Rectangular arrayOfRectangular[numberOfShapes];
   for (int i=0;i< numberOfShapes; i++){
        if(arrayOfShapes[i]==1){
            cout<<"Enter the data of line"<<endl;
            Line r;
            cin >> r;
            arrayOfLines[countOfLine]=r;
            /*cin>>(arrayOfLines[countOfLine]);*/
            countOfLine++;
        }
        if(arrayOfShapes[i]==2){
            cout<<"Enter the data of Rectangule"<<endl;
            Rectangular l;
            cin>>l;
            arrayOfRectangular[countOfRect]=l;
            countOfRect++;
        }
        if(arrayOfShapes[i]==3){
            cout<<"Enter the data of Circle"<<endl;
            Circle r;
            cin>>r;
            arrayOfCircles[countOfCircle]=r;
            countOfCircle++;
        }
   }

   initwindow(650,650);
   for(int i=0;i<countOfLine;i++){
    arrayOfLines[i].draw();
   }
   for(int j=0;j<countOfCircle;j++){
    arrayOfCircles[j].draw();
   }
   for(int k=0;k<countOfRect;k++){
    arrayOfRectangular[k].draw();
   }
   getch();
   closegraph();

    return 0;
}

istream & operator >> (istream &in,  Line &l)
{
    int xl=0; int yl=0 ;
    int xr=0; int yr=0 ;
    int color=0;
    cout<<"Line Data initalization"<<endl;
    cout << "Enter x or left point "<<endl;
    in >> xl;
    cout << "Enter y or left point "<<endl;
    in >> yl;
    l.setLeftPoint(xl,yl);

    cout << "Enter x or right point "<<endl;
    in >> xr;
    cout << "Enter y or right point "<<endl;
    in >> yr;
    l.setRightPoint(xr,yr);
    cout<<"Enter your color number"<<endl;
    in>>color;
    l.setColor(color);
    return in;
}

istream & operator >> (istream &in,  Rectangular &l)
{
    int xl=0; int yl=0 ;
    int xr=0; int yr=0 ;
    int color=0;
    cout<<"Rectangular Data initalization"<<endl;
    cout << "Enter x or left point ";
    in >> xl;
    cout << "Enter y or left point "<<endl;
    in >> yl;
    l.setLeftPoint(xl,yl);

    cout << "Enter x or right point "<<endl;
    in >> xr;
    cout << "Enter y or right point "<<endl;
    in >> yr;
    l.setRightPoint(xr,yr);
    cout<<"Enter your color number"<<endl;
    in>>color;
    l.setColor(color);
    return in;
}

istream & operator >> (istream &in,  Circle &l)
{
    int xl=0; int yl=0 ;
    int color=0;
    cout<<"Circcle Data initalization"<<endl;
    cout << "Enter x of center "<<endl;
    in >> xl;
    cout << "Enter y of center point ";
    in >> yl;
    l.setPoint(xl,yl);
    cout<<"Enter your color number"<<endl;
    in>>color;
    l.setColor(color);
    return in;
}

