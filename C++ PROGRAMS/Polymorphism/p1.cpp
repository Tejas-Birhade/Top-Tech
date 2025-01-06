// polymorphism : poly: many morphism : forms 
// compile time polymorphism 
//1. function overload : having functon name same but parameter are different (no of parameters, type of parameter);

#include<iostream>
using namespace std;
int add_fun(int a,int b){
    return a+b;
}
int add_fun(int a,int b,int c){
    return a+b+c;
}
int add_fun(double a, double b){
    return a+b;
}
int main(){
    // int x,y,z;
    // cout<<"Enter x ,y,z:";
    // cin>>x>>y>>z;
    cout<<"Addition of two numbers="<<add_fun(10,20)<<endl;
    cout<<"Addition of two numbers="<<add_fun(10,50,70)<<endl;
    cout<<"Addition of two numbers="<<add_fun(10.2,63.25)<<endl;
}