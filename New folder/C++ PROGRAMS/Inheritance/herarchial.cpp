//hierarchial inheritance; in this we have one base class and its multiple child class.
#include<iostream>
#define pi 3.14
using namespace std;
class shape{
   public:
    string name;
    public:
    void get_nm(){
        cout<<"Enter shape name:";
        cin>>name;
    }
    void show_nm(){
        cout<<"Name="<<name<<endl;
    }
};
class rectangle:public shape{
    public:
    int area,length,width;
    public:
    void get_lw(){
        get_nm();
        cout<<"Enter length and width:";
        cin>>length>>width;
    }
    void area_r(){
        area=length*width;
        show_nm();
        cout<<"Area of rectangle="<<area<<endl;
    }
};
class circle:public shape{
    public:
    float radius,ar;
    public:
    void getr(){
        get_nm();
        cout<<"Enter radius:";
        cin>>radius;
    }
    void area_c(){
        ar=pi*radius*radius;
        show_nm();
        cout<<"Area of circle="<<ar<<endl;
    }
};
int main(){
    rectangle rect;
    rect.get_lw();
    rect.area_r();
    circle cr;
    cr.getr();
    cr.area_c();

}