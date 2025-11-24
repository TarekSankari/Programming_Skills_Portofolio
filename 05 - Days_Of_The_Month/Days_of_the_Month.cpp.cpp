#include <iostream>
using namespace std;

int main() {
    int month;
    
    cout << "Please enter a month, using a numerical method (1-12): ";
    cin >> month;
    
    switch (month) {
        
        case 1: cout << "January consists of 31 days."; break;
        case 2: cout << "February consists of 28 days."; break;
        case 3: cout << "March consists of 31 days."; break;
        case 4: cout << "April consists of 30 days."; break;
        case 5: cout << "May consists of 31 days."; break;
        case 6: cout << "June consists of 30 days."; break;
        case 7: cout << "July consists of 31 days."; break;
        case 8: cout << "August consists of 31 days."; break;
        case 9: cout << "September consists of 30 days."; break;
        case 10: cout << "October consists of 31 days."; break;
        case 11: cout << "November consists of 30 days."; break;
        case 12: cout << "December consists of 31 days."; break;
        
        default:
        cout << "The number is not valid";
        break;
    }
    return 0;
}