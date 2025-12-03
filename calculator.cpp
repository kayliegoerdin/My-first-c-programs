#include <iostream> 
#include <string>
using namespace std;

int main () {
    double number1;
    double number2;
    string stop;
    char op;

    do {
    cout << "Enter here" << endl;
    cin >> number1 >> op >> number2;
    if (op == '+') {
        cout << "The result is: " << number1 + number2 << endl;
    } else if (op == '-') {
        cout << "The result is: " << number1 - number2 << endl;
    } else if (op == '*') {
        cout << "The result is: " << number1 * number2 << endl;
    } else if (op == '/') {
        if (number2 != 0) {
            cout << "The result is: " << number1 / number2 << endl;
        } else {
            cout << "Error!" << endl;
        }
    } else {
        cout << "Invalid operator." << endl;
    }
    cout << "Type 'q' to quit or any other key to continue: ";
    cin >> stop;
    
    } while (stop.at(0) != 'q');

    

    return 0;
}