// nested if  //age>18 <65 weight=>45
#include<iostream>
using namespace std;
int main(){
    int age,weight;   
    cout<<"Enter age :";
    cin>>age;
    if(age>18 && age<=65){
        cout<<"Enter weight:";
        cin>>weight;
        if(weight>=45){
            cout<<"Able to donate blood"<<endl;
        }
        else{
            cout<<"Not able to donate blood"<<endl;
        }
    }
    else{
        cout<<"sorry you can't be able to donate."<<endl;
    }
}