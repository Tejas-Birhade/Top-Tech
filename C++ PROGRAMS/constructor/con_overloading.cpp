// constructor overloading :constructor overloading means that in a program we have more then one type of constructor .
#include<iostream>
using namespace std;
class rectangle{
    public:
    int length,width;
    public:
    rectangle(); // default constructor
    rectangle(int,int); // parameterized constructor
    int Area(){   //member function 
        return length * width;
    }
};
rectangle :: rectangle(){
    cout<<"Enter length:";
    cin>>length;
    cout<<"Enter width:";
    cin>>width;
}
rectangle::rectangle(int l,int w){
  length=l;
  width=w;
}
int main(){
    rectangle rect;  // default object
    rectangle rect1; // parameterized object
    cout<<"Area of rectangle having default constructor= "<<rect.Area()<<endl;
    cout<<"Area of rectangle having parameterized constructor= "<<rect1.Area()<<endl;
} 