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

    while (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Please type again : ";
        cin >> age;
    }

    cout << "Hello My name is " << name <<". I am "<< age <<" years old.";

    if (age >= 18){
        cout << "\nYou are a big guys.";
    } else {
        cout << "\nYou cannot get any club yet";
    }

    return 0;
}

