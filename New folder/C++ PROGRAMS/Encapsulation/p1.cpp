// encapsulation :
#include<iostream>
using namespace std;
class Encapulation{
    private:
    int num;   // hiding number from outside data;
     public:
    void setnum(int n){  //member function setter method
       num=n;
    }
    void getnum(){   //getter method
        cout<<"Number="<<num<<endl;
    }
};
int main(){
    Encapulation obj;
    obj.setnum(741);
    obj.getnum();
}