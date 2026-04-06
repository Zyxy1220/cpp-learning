#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Please type your name : ";
    getline(cin,name);

    cout << "Hello My name is " << name;
    return 0;
}

