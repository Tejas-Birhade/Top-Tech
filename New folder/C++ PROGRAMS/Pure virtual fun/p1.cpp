// pure virtual function :
#include<iostream>
using namespace std;
class shape{   //abstract class
    public:
    virtual int cal_area()=0;  // pure virtual function.
};
class square :public shape{
    public:
    float side,area_s;
    public:
    square(float a){
        side=a;
    }
    int cal_area(){
        area_s=side*side;
        cout<<"Area of square:"<<area_s<<endl;
    }
};
class circle :public shape{
    public:
    float radius,area_c;
    public:
    circle(float r){
        radius=r;
    }
    int cal_area(){
        area_c=3.14*radius*radius;
        cout<<"Area of circle:"<<area_c<<endl;
    }
};
int main(){
    shape * sh;  // pointer of base class
    square sq(5.3);  // object for child class
    sh = &sq;  // referencing object to pointer.
    sh->cal_area();  // calling member function for that class.
    circle cr(5.8);
    sh = &cr;
    sh->cal_area();  
}