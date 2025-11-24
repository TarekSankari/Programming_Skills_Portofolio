#include <iostream>
using namespace std;

int main() {
    int password = 123456;
    int attempt = 0;
    
    cout << "Please enter your password: ";
    cin >> attempt;
    
    while (attempt != password) {
        cout << "Incorrect password. Please try again: ";
        cin >> attempt;
    }
    cout << "You have succesfully logged in";
    
    return 0;
}