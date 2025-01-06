//class program
#include<iostream>
using namespace std;
class student{  //class name student
    public:   // access/modifier/specifier
    int rollno;  //data member
    string name;
    public:
    void get_data(){  // member function
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter rollno:";
        cin>>rollno;
    }
    void display(){   //Member function
        cout<<"Rollno:="<<rollno<<endl<<"Name="<<name<<endl;
    }
};
int main(){
    //object:= classname objectname;
student stud;
stud.get_data();
stud.display();
}