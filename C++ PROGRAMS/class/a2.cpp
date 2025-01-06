//class with member function declare outside the class.
#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    string name;
    public:
    void getdata();
    void showdata();
};
void student :: getdata(){

    cout<<"Enter rollno:";
    cin>>rollno;
    cout<<"Enter name:";
    cin.ignore();
    getline(cin, name);
}
void student :: showdata(){
    cout<<"Rollno:"<<rollno<<"\n Name:"<<name<<endl;
}

int main(){
    student stud;
    stud.getdata();
    stud.showdata();
}