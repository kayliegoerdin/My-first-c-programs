#include <iostream>
using namespace std;

int main() {
    int password=987654321;
    cout << "Enter your password: " << endl;
    cin >> password;

    while (password != 987654321) {
        cout << "Incorrect password, try again: " << endl;
        cin >> password;
        if (password == 987654321)
        cout << "Access granted " << endl;
    }

    return 0; 
}