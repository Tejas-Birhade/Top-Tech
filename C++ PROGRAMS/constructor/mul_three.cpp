//multiply three number using constructor
#include<iostream>
using namespace std;
class mul{
    public:
      int a;
      int b;
      int c;  // data member
    public:
    mul(int num1,int num2,int num3){   // constructor
        a=num1;
        b=num2;
        c=num3;
    }
    void result(){
        cout<<"Result="<<a*b*c<<endl;
    }  
};
int main(){
    int p,q,r;
    cout<<"Enter number 1:";
    cin>>p;
    cout<<"Enter number 2:";
    cin>>q;
    cout<<"Enter number 3:";
    cin>>r;
    mul mp(p,q,r);
    mp.result();
}