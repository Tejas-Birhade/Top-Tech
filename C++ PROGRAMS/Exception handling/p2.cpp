// number not divisible by 0;

#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter numbers:";
    cin>>x>>y>>z;
    try{
        int res=(x-y);
        if(res!=0){
           int  res1=z/res;
            cout<<"Result="<<res1<<endl;
        }
        else{
            throw(res);
        }
    }
    catch (int r){
        cout<<"Not divisible by zero. as the result of numbers is "<<r<<endl;
    }
}