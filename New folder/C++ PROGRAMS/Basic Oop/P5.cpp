// Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.

#include<iostream>
#define PI 3.14
using namespace std;
class Area{
    private:
    float radius;
    public:
    int area(float radius){
        float area;
        area = (PI*radius*radius);
        cout<<"Area: "<<area<<endl;
    }
    int circumference(float radius){
        float circumference;
        circumference = (2*PI*radius);
        cout<<"Circumference: "<<circumference<<endl;
    }
};
int main(){
    Area a;
    float rad;
    cout<<"Enter radius: ";
    cin>>rad;
    a.area(rad);
    a.circumference(rad);
}