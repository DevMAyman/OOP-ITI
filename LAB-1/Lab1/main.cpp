#include <iostream>

using namespace std;
class Complex{
int real;
int image;
public:
void setReal(int _real){
real=_real;
}

int getReal(){
return real;
}
void setImage(int _image){
image=_image;
}

int getImage(){
return image;
}
void print(){
    if(image>0){
    cout<<real<<"+"<<image<<"i"<<endl;
    }

    else if(0==image){
    cout<<real<<endl;
    }

    if(image<0){
    cout<<real<<image<<"i"<<endl;
    }

}
Complex Add (Complex c1){
Complex c3;
int y= c1.getReal()+getReal();
c3.setReal(y);
int x=c1.getImage()+getImage();
c3.setImage(x);
return c3;
}
Complex sub (Complex c1){
Complex c3;
int y= c1.getReal()-getReal();
c3.setReal(y);
int x=c1.getImage()-getImage();
c3.setImage(x);
return c3;
}
};
int main()
{
    int x=5,y=6;
    cout<<"Before Swap => x = "<<x<<", y = "<<y<<endl;
    swap(x,y);
    cout<<"After Swap => x = "<<x<<", y = "<<y<<endl;
    /***************************************************/
    Complex c1;
    c1.setReal(5);
    c1.setImage(-6);
    Complex c2;
    c2.setReal(6);
    c2.setImage(-20);
    Complex c3;
    c3= c1.Add(c2);
    c3.print();

    return 0;
}

/*****************************************************************/
void swap (int &numb1,int &numb2){
int temp=0;
temp=numb1;
numb2=numb1;
numb1=temp;
}

