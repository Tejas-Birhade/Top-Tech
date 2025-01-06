// Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
// Rectangle: Area * breadth Triangle: ½ *Area* breadth Circle: Pi * Area *Area

#include<iostream>
#define pi 3.14
using namespace std;

float rect(int area,int width){
    return area * width;
}
float triangle(int area,int width){
    return ((area * width)/2);
}
float circle(int radius){
    return (pi*radius*radius);
}
int main(){
    cout<<"Area of rectangle :"<<rect(3,4)<<endl;
    cout<<"Area of triangle :"<<triangle(4,5)<<endl;
    cout<<"Area of circle :"<<circle(4)<<endl;


}