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
};
void print(Complex c1);
Complex Add (Complex c1, Complex c2);
Complex sub (Complex c1, Complex c2);
int main()
{
    Complex c1;
    c1.setReal(5);
    c1.setImage(-6);
    Complex c2;
    c2.setReal(11);
    c2.setImage(-20);
    Complex c3 = Add(c1,c2);
    print(c3);
    Complex c4 = sub(c1,c2);
    print(c4);
    return 0;
}

/*****************************************************************/
void print(Complex c1){
    if(c1.getImage()>0){
    cout<<c1.getReal()<<"+"<<c1.getImage()<<"i"<<endl;
    }

    else if(0==c1.getImage()){
    cout<<c1.getReal()<<endl;
    }

    if(c1.getImage()<0){
    cout<<c1.getReal()<<c1.getImage()<<"i"<<endl;
    }

}

Complex Add (Complex c1, Complex c2){
Complex c3;
int y= c1.getReal()+c2.getReal();
c3.setReal(y);
int x=c1.getImage()+c2.getImage();
c3.setImage(x);
return c3;
}

Complex sub (Complex c1, Complex c2){
Complex c3;
 int y= c1.getReal()-c2.getReal();
 c3.setReal(y);
int x=c1.getImage()-c2.getImage();
c3.setImage(x);
return c3;
}
