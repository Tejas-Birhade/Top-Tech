// friend function: for accessing private data_member outside the class.
#include<iostream>
using namespace std;
class manav;
class Tejas{
    private:
    int money=50;
    friend int harsh(Tejas,manav);
};
class manav{
    private:
    int money=100;
    friend int harsh(Tejas,manav);
};
int harsh(Tejas t,manav m){
    cout<<"sum ="<<t.money+m.money<<endl;
}
int main(){
    Tejas tt;
    manav mm;
    harsh(tt,mm);
}