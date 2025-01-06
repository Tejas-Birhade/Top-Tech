// function overriding :
#include<iostream>
using namespace std;
class base {
    public:
   void show(){
        cout<<"I am in  base class "<<endl;
    }
};
class  Child : public base{
        public:
        void show(){
        //   base::show();  //method 1;
            cout<<"I am in child class."<<endl;
        }
};
int main(){
    base *b;  //pointer of base class
    Child ch;  // object of child class
    b=&ch;  // referencing pointer to object
    b->show();  // accessing member function with the pointer variable. (late binding)
    ch.show();  // accessing member function of child class.
} 