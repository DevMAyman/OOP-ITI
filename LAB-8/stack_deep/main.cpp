#include <iostream>
using namespace std;
template <class T>
class Stack{
    int arr_size;
    T * arr;
    int top;
    public:
    Stack(int arr_size){
        (*this).arr_size=arr_size;
        top=-1;
        arr=new T[arr_size];
    }

    int get_top(){
        return top;
    }
    void extend(){
        T* temp= NULL;
        temp = new T[arr_size*2];
        for(int i=0;i<arr_size;i++){
            temp[i]=(*this).arr[i];
        }
          delete[] arr;
         (*this).arr=temp;
         (*this).arr_size=arr_size*2;
    }
    void push(T numb){
        if( top >= arr_size-1){
            extend();
        }
            top++;
            arr[top] = numb;
    }

    int pop(void){
        int x=0;
        if( top > -1){
            x = (*this).arr[top];
            top--;
        }
        else if(top==-1){
            cout<<"Stack is empty-";
        }
        return x;
    }

    void display(){
    int i;
    for(i=0;i<=top;i++){
        cout<<arr[i];
        if(i!=top){
            cout<<", ";
        }
    }
    cout<<endl;
  }
  /// = operator
  Stack operator = (Stack & s){
        (*this).arr_size=s.arr_size;
        (*this).top=s.top;
        delete[] arr;
        (*this).arr= new T[arr_size];
        for(int i=0;i<arr_size;i++){
            (*this).arr[i]=s.arr[i];
        }
        return *this;
  }
  ~Stack(){
      delete[] arr;
  }
};

int main()
{
    Stack<string> s1(5);
    s1.push("adf");
    s1.push("bsd");
    s1.push("csad");
    s1.push("dsad1");
    s1.push("fasd");
    s1.push("rasd");
    s1.display();
    Stack<int> s2(5);
    s2.push(1);
    s2.push(2);
    s2.push(3);
    s2.push(4);
    s2.push(5);
    s2.push(6);
    s2.display();
    return 0;
}
