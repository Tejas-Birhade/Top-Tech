// display employee details using nested class
#include<iostream>
using namespace std;
class A{
    public:
    string emp;
    int no;
    public:
    void get(){
        cout<<"Enter employee name :"<<endl;
        cin>>emp;
        cout<<"Emp id :"<<endl;
        cin>>no;
    }
    class B{
        public:
        void show(A &a){
            cout<<"name :"<<a.emp<<endl;
            cout<<"no :"<<a.no<<endl;
        }
    };
};
int main(){
    A a;
    a.get();
    A::B b;  
    b.show(a);

}