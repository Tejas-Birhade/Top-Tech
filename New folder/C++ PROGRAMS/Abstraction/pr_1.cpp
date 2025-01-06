//abstraction :
#include<iostream>
using namespace std;
class abstraction{
    private:
    string name;
    public:
    void get_name(){
        cout<<"Enter name:";
        getline(cin, name);
    }
    void show(){
        cout<<"Name="<<name<<endl;
    }
};
int main(){
    abstraction ab;
    ab.get_name();
    ab.show();
}