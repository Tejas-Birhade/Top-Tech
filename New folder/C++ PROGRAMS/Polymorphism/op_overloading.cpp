// operator overloading : it gives special meaning to the operator without changing is original meaning.
//syntax:
// return type operator (operator symbol)(classname &objectname)
// program to overload > operator.
#include<iostream>
using namespace std;
    class overload{
        public:
        int num1;
        public:
        int get_data(){
            cout<<"num1:";
            cin>>num1;
        }
        int operator >(overload &obj){
            if(num1>obj.num1){
                return 1;
            }
            else{
                return 0;
            }
        }
        int operator ==(overload &obj1){
            if(num1==obj1.num1){
                return 1;
            }
            else{
                return 0;
            }
        }
    };
int main(){
    overload ov,ov1;
    ov.get_data();
    ov1.get_data();
    int res=(ov > ov1) || (ov == ov1) ;
    cout<<"Result="<<res<<endl;

}