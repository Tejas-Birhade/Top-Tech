// Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.

#include<iostream>
using namespace std;
class rectangle{
    private:
    float l,w;
    public:
    int area(int l,int w) { 
        int area;
        area = l*w;
        cout<<"Area is :"<<area<<endl;
    }
    int perimeter(int l,int w) {
        int perimeter;
        perimeter = 2*(l+w);
        cout<<"Perimeter is :"<<perimeter<<endl;
    }
};
int main(){
    rectangle rec; //rectangle class rec obj
    float length,width;
    cout<<"Enter a length for rectangle"<<endl;
    cin>>length;
    cout<<"Enter width for rectangle"<<endl;
    cin>>width;
    rec.area(length,width);
    rec.perimeter(length,width);

}