// Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables.
#include<iostream>
using namespace std;
class car{
    private:
    string comp;
    int model;
    int year;
    public:
    void getdata(){
        cout<<"Enter company name: "<<endl;
        cin>>comp;
        cout<<"Enter model: "<<endl;
        cin>>model;
        cout<<"Enter year: "<<endl;
        cin>>year;
    }
    void setdata(){
        getdata();
        cout<<"company name: "<<comp<<endl;
        cout<<"model: "<<model<<endl;
        cout<<"year: "<<year<<endl;
    }
};
int main(){
    car cr;
    cr.setdata();
}