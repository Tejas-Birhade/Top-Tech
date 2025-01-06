// exception handling 
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age";
    cin>>age;
    try{
        if(age>18){
            cout<<"Eligible to vote.";
        }
        else{
            throw(age);
        }
    }
    catch(int agee){
        cout<<"You enter invalid age"<<agee<<endl;
    }
}