#include <iostream>
#include <string>
using namespace std;

int main () {
    string name;
    string town;
    int age;
    
    cout << "Please enter your full name: ";
    getline(cin, name);
    
    cout << "Please enter the name of your town: ";
    getline(cin, town);
    
    cout << "Please enter your age: ";
    cin >> age;
    
    cout << "Name: " << name << endl
         << "Town: " << town << endl
         << "Age: " << age << endl;
    
    return 0;
    
}