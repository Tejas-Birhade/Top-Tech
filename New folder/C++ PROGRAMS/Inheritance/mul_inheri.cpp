// multiple inheritance : if we have same member function name in both the base class then there is an ambiguty/problem 
#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"I am in class A"<<endl;
    }
};
class B{
    public:
    void show(){
        cout<<"I am i class B"<<endl;
    }
};
class C : public A,B{
    public:
    void show(){
        A::show();
        B::show();
        cout<<"I am in class C"<<endl;
    }
};
int main(){
  C c;
  c.show();  
}