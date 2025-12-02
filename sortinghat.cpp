#include <iostream>
using namespace std;

int main() {
    int gryffindor;
    int hufflepuff;
    int slytherin;
    int ravenclaw;
    int choice;

    cout << "what do you value more? 1. courage 2. loyalty 3. ambition 4. knowledge" << endl;
    cin >> choice;

    if (choice == 1) {
        gryffindor++;
        cout << "You have been sorted into Gryffindor!" << endl;
    } else if (choice == 2) {
        hufflepuff++;
        cout << "You have been sorted into Hufflepuff!" << endl;
    } else if (choice == 3) {
        slytherin++;
        cout << "You have been sorted into Slytherin!" << endl;
    } else if (choice == 4) {
        ravenclaw++;
        cout << "You have been sorted into Ravenclaw!" << endl;
    } else {
        cout << "Invalid choice. Please restart the sorting hat." << endl;
    }

    return 0;
}
