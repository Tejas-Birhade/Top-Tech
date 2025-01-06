// multilevel inheritance :
#include<iostream>
using namespace std;
class employee{   // base class 
    public:
    int eid;
    string name;
    public:
    void get_dt(){
        cout<<"Enter eid:";
        cin>>eid;
        cout<<"Enter name:";
        cin.ignore();
        getline(cin ,name);
    }
    void display(){
        cout<<"Id="<<eid<<endl<<"Name"<<name<<endl;
    }
};
class Task:public employee{   //derived class and also base class for next class
    public:
    int t1,t2;
    public:
    int gettask(){
        get_dt();
        cout<<"Enter task:";
        cin>>t1>>t2;
    }
    int show(){
        display();
        cout<<"T1="<<t1<<endl<<"T2="<<t2<<endl;
    }
};
class Appriasal :public Task{   // child class
    public:
    int total;
    public:
    void task_total(){
        gettask();
        total=t1+t2;
    }
    void show_task(){
        show();
        cout<<"Total="<<total<<endl;
    }
};

int main(){
    Appriasal app;  //object of child class
    app.task_total();
    app.show_task();
}