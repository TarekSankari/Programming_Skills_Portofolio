#include <iostream>
#include <string>
using namespace std;

int main() {
    string Answer;
    
    cout << " What is the capital of France: ";
    getline(cin, Answer);
    
    // The following line of code is part of the advanced task, which makes all variations of letters viable.
    
    for (int i = 0; i < Answer.size(); i++){
        Answer[i] = tolower(Answer[i]);
    }
    
    if (Answer == "paris") {
        cout << "The answer is correct!" << endl;
    } else {
        cout << "The answer is incorrect!" << endl;
    }
    
    return 0;

}