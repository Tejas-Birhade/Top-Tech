// class with static values.
#include<iostream>
using namespace std;
class student{
    public:
    int rollno=1;
    string name="Riya";
};
int main(){
  student  stud;
  cout<<"Name="<<stud.name<<endl;
  cout<<"Rollno="<<stud.rollno<<endl;  
}