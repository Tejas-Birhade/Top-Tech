//destructor : it is opposite of constructor
//syntax: ~classname()
//clean memory 
#include<iostream>
using namespace std;
class cube{
    public:
    int side;
    public:
    cube(){ // constructor
        cout<<"enter side:";
        cin>>side;
    }
    int result(){  // member function
        return side*side*side;
    }
    ~cube(){    //destructor 
        cout<<"Destructor calling"<<endl;
    }
};
int main(){
    cube cb;  //object
    cout<<"Cube of the given number="<<cb.result()<<endl;
    cout<<"Calling destructor"<<endl;
}