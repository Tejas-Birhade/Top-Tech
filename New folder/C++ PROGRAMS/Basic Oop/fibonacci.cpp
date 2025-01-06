#include<iostream>
using namespace std;
int main(){
    int n1=0,n2=1,n;

    cout<<"Enter end number :";
    cin>>n;
    cout<<"Fibonacci series:"<<endl;
    for(int i=0;i<=n;i++){
        cout<<n1<<",";
        int temp=n1+n2;
        n1=n2;
        n2=temp;
    }
}