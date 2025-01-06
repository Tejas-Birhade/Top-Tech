// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    string country;
    
    public:
    void getdata();
    void show();
};
void person::getdata(){
    cout<<"Enter person name: ";
    cin>>name;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Country: ";
    cin.ignore();
    getline(cin,country);
}
void person::show(){
    cout<<"name :"<<name<<endl;
    cout<<"age :"<<age<<endl;
    cout<<"country :"<<country<<endl;

}

int main(){
    person data;
    data.getdata();
    data.show();  
}