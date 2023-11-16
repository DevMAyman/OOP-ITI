#ifndef OVERLOADFUN_H
#define OVERLOADFUN_H
#include "iostream"
#include "overloadFun.h"
using namespace std;

istream & operator >> (istream &in,  Line *l)
{
    int xl=0; int yl=0 ;
    int xr=0; int yr=0 ;
    int color=0;
    cout<<"Line Data initalization"<<endl;
    cout << "Enter x or left point "<<endl;
    in >> xl;
    cout << "Enter y or left point "<<endl;
    in >> yl;
    (*l).setLeftPoint(xl,yl);

    cout << "Enter x or right point "<<endl;
    in >> xr;
    cout << "Enter y or right point "<<endl;
    in >> yr;
    (*l).setRightPoint(xr,yr);
    cout<<"Enter your color number"<<endl;
    in>>color;
    (*l).setColor(color);
    return in;
}

istream & operator >> (istream &in,  Rectangular *l)
{
    int xl=0; int yl=0 ;
    int xr=0; int yr=0 ;
    int color=0;
    cout<<"Rectangular Data initalization"<<endl;
    cout << "Enter x or left point "<<endl;
    in >> xl;
    cout << "Enter y or left point "<<endl;
    in >> yl;
    (*l).setLeftPoint(xl,yl);

    cout << "Enter x or right point "<<endl;
    in >> xr;
    cout << "Enter y or right point "<<endl;
    in >> yr;
    (*l).setRightPoint(xr,yr);
    cout<<"Enter your color number"<<endl;
    in>>color;
    (*l).setColor(color);
    return in;
}

istream & operator >> (istream &in,  Circle *l)
{
    int xl=0; int yl=0 ;
    int color=0;
    cout<<"Circcle Data initalization"<<endl;
    cout << "Enter x of center "<<endl;
    in >> xl;
    cout << "Enter y of center point "<<endl;
    in >> yl;
    (*l).setPoint(xl,yl);
    cout<<"Enter your color number"<<endl;
    in>>color;
    (*l).setColor(color);
    return in;
}


#endif // OVERLOADFUN_H
