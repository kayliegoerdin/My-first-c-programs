#include <iostream>
#include <cmath>
using namespace std;

double calculateAverage(double wiskunde, double biologie, double natuurkunde, double scheikunde, double nederlands, double engels) {
    return (wiskunde + biologie + natuurkunde + scheikunde + nederlands + engels) / 6;
}

int main() {
    double wiskunde;
    double biologie;
    double natuurkunde;
    double scheikunde;
    double nederlands;
    double engels;
    double gemiddelde;
    int roundedAverage = round(gemiddelde);

    cout << "voer je cijfer in voor wiskunde: " << endl;
    cin >> wiskunde;
    cout << "voer je cijfer in voor biologie: " << endl;
    cin >> biologie;
    cout << "voer je cijfer in voor natuurkunde: " << endl;
    cin >> natuurkunde;
    cout << "voer je cijfer in voor scheikunde: " << endl;
    cin >> scheikunde;
    cout << "voer je cijfer in voor nederlands: " << endl;
    cin >> nederlands;
    cout << "voer je cijfer in voor engels: " << endl;
    cin >> engels;

    gemiddelde = calculateAverage(wiskunde, biologie, natuurkunde, scheikunde, nederlands, engels);
    
    
    cout << "je gemiddelde cijfer is: " << gemiddelde << endl;
    cout << "je afgeronde gemiddelde is: " << round(gemiddelde) << endl;

    return 0;
}