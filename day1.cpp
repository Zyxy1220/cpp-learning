#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Please type your name : ";
    getline(cin,name);

    int age;
    cout << "Please type your age : ";
    cin >> age;

    cout << "Hello My name is " << name <<". I am "<< age <<" years old.";

    return 0;
}

