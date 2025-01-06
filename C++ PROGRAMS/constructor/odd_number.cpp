//get and desplay odd number using constructor
#include<iostream>
using namespace std;

class odd {
    private:
    int start, end;

    public:
    odd(int s, int e){
        start = s;
        end = e;
        cout << "Constructor called. Range set from " << start << " to " << end << endl;
    }
    void get() {
        cout << "Enter start value: ";
        cin >> start;
        cout << "Enter end value: ";
        cin >> end;
    }
    void display() {
        cout << "Odd numbers between " << start << " and " << end << " are: ";
        for(int i = start; i <= end; i++) {
            if(i % 2 != 0) {
                cout << i << " ";
            }
        }
    }
    ~odd(){
        cout<<endl;
        cout << "Destructor called. Object is being deleted." << endl;
    }
};
int main() {
    odd od(1, 10); 
    od.display();
    cout<<endl;
    od.get();
    od.display();

}
