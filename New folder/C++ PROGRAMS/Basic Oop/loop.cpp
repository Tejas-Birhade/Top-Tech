// loop : 
// for loop
// while loop
// do..while loop

#include<iostream>
using namespace std;
int main(){
    int num,i=1;
    cout<<"Enter number:";
    cin>> num;
    do{
        int res=num*i;
        cout<<num<<"*"<<i<<"="<<res<<endl;
        i++;
    }while(i<=10);
}