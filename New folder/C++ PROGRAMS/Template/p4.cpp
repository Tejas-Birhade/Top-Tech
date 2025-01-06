//function template :
#include<iostream>
using namespace std;
template <typename t>
t sum_fun(t x,t y){
    return x+y;
}
int main(){
    cout<<sum_fun<string>("tops","program")<<endl;
    cout<<"calling function with integer value:"<<endl;
    cout<<sum_fun<int>(150,20)<<endl;
    cout<<sum_fun<float>(3.6,8.50)<<endl;
}