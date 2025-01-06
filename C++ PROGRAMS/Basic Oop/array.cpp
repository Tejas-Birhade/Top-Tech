// array: It is a derived data-type.it is used to store similar type of value in a single variable name.
// program to  take input from user and sort them in descending order.
#include<iostream>
using namespace std;
int main(){
    int arr[7];
    int i,j;
    cout<<"Enter array elements: ";
    for(i=0;i<7;i++){
        cin>>arr[i];
    }
    cout<<"Print array"<<endl;
    for(i=0;i<7;i++){
        cout<<arr[i]<<"\t";
    }
    //logic for sorting.
    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            if(arr[i]<arr[j]){
                int k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;            
            }
        }
    }
    // printing array in descending
    cout<<"\n Descending array:\n";
    for(i=0;i<7;i++){
        cout<<arr[i]<<"\t";
    }
}