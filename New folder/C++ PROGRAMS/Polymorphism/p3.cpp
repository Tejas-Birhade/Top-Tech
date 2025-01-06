// 10.Write a program to concatenate the two strings using Operator Overloading
#include <iostream>
#include <cstring>
using namespace std;

class String {
    char str[100];
public:
    void getString() {
        cout << "Enter string: ";
        cin >> str;
    }

    void display() {
        cout << str;
    }

    String operator + (String &s) {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
};

int main() {
    String str1, str2, str3;

    str1.getString();
    str2.getString();

    str3 = str1 + str2; 

    cout << "Concatenated string: ";
    str3.display();

    return 0;
}
