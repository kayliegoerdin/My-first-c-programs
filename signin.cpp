#include <iostream>
#include <string>
using namespace std;

int main() {
    string username ; 
    string password ;

    cout << "Enter your username: " << endl;
    cin >> username;
    cout << "Enter your password: " << endl;
    cin >> password;
    
    if (password == "qwertyuiop")
    {
        cout << "Access granted " << endl;
    
    } 
    else {
        cout << "Access denied, try again tomorrow. " << endl;
    }

        return 0;
}
