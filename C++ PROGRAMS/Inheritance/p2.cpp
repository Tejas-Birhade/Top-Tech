// Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class rect{
    public:
    float length;
    public:
    void getlength(){
        cout<<"Enter length: ";
        cin>>length;
    }
    void display(){
        cout<<"length is: "<<length<<endl;
    }
    
};
class width : public rect{
    public:
    float width;
    float res;
    public:
    void getwidth(){
        getlength();
        cout<<"Enter width: ";
        cin>>width;
    }
    void displayw(){
        display();
        cout<<"width is: "<<width<<endl;
    }
    void result(){
        res = width *length;
        cout<<"Area of rectangle: "<<res<<endl;
    }
};
int main(){
        width w;
        w.getwidth();
        w.displayw();
        w.result();
}