//function : It is set of statements that takes some input do computation on it and gives the output.
// program to print sum of n natural numbers.
#include<iostream>
using namespace std;
int sum(int num){
    int res=0;
    for(int i=1;i<=num;i++)
    {
        res+=i;
    }
    cout<<"total="<<res<<endl;
}
int main(){
    int num;
    cout<<"enter Number:";
    cin>>num;
    sum(num);
}