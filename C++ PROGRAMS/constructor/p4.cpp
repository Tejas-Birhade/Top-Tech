// constructor.
#include<iostream>
using namespace std;
class Student{
    public:
    int rollno;
    string name;
    public:
    Student (){  // constructor
    cout<<"Enter rollno:";
    cin>>rollno;
    cout<<"Name:";
    cin.ignore();
    getline(cin, name);
    }
    void show(){
        cout<<"Rollno="<<rollno<<"\n Name"<<name<<endl;
    }
};

int main(){
    Student st;
    st.show();
}