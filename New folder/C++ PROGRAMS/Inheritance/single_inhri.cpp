// base class,super class,parent class
// child class, derived class ,sub class
//single inheritance
// syntax to inherit: class child_classname : access specifier parent_classname

#include<iostream>
using namespace std;
class person{   // parent class
    public:
    int pid;
    string p_name;
    public:
    void get_data(){
        cout<<"Enter pid:";
        cin>>pid;
        cout<<"Enter name:";
        cin.ignore();
        getline(cin ,p_name);
    }
    void display(){
        cout<<"Pid="<<pid<<endl<<"Name="<<p_name<<endl;
    }
};
class student:public person{   // child class
    public:
    float percent;
    public:
    void get_percent(){
        get_data();
        cout<<"Enter percent:";
        cin>>percent;
    }
    void show(){
        display();
        cout<<"Percentage="<<percent<<endl;
    }
};
int main(){
    student stud;
    stud.get_percent();
    stud.show();
}
