#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[6] = {"Jake", "Ron", "Sam", "Ian", "Dave", "Zac"};
    string SearchName = "Zac";
    
    bool found = false;
    
    for (int i = 0; i < 6; i++) {
        if (names[i] == SearchName) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "Name found";
    } else {
        cout << "The name has not been found";
    }
    return 0;
}