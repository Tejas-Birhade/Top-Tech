//constructor 
#include<iostream>
using namespace std;
class cube{
    private:
      int a;  // data member
    public:
    cube(int num){   // constructor
        a=num;
    }
    void result(){
        cout<<"Result="<<a*a*a<<endl;
    }  
};
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    cube cb(5);
    cb.result();
    cube cb1(n);
    cb1.result();
}