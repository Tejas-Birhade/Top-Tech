// class template:-

#include<iostream>
using namespace std;
template <class t>
class show{
    public:
     t a,b,r;
     public:
    show( t p,t q){
        a= p;
        b= q;
    }
    void display(){
        r=a+b;
        cout<<"A="<<a<<"\n B="<<b<<endl;
        cout<<"result="<<r<<endl;
    }
};
int main(){
    show<float> sh(12.3,24.0);
    sh.display();
    show<int>sh1(40,50);
    sh1.display();    
}