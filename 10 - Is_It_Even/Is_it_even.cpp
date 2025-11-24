#include <iostream>
using namespace std;

string check(int n) {
    if (n % 2 == 0)
    return "The number provided is even";
    else
    return "The number provided is odd";
}

int main() {
    int num;
    cout << "Please enter a number: ";
    cin >> num;
    cout << check(num) << endl;
    return 0;
}