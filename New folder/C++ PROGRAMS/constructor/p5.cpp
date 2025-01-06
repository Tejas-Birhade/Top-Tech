#include<iostream>
using namespace std;
class Addition{
   private:
    int a,b;
    public:
    Addition(int a1,int b1){  // parameterized constructor
     a=a1;
     b=b1;
    }
    void show(){
        cout<<"Result="<<a+b<<endl;
    }
};
int main(){
    int a1,b1;
    cout<<"enter numbers:";
    cin>>a1>>b1;
    Addition ad(10,50);
    ad.show();
    Addition ad1(a1,b1);
    ad1.show();
}