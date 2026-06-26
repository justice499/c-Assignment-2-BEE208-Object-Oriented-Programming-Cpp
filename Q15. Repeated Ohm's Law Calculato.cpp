#include <iostream>
using namespace std;

int main() {
    double voltage, current, resistance;
    char userChoice;

    do {
        cout << "\n--- Ohm's Law (R = V / I) ---" << endl;
        cout << "Enter voltage (V): "; cin >> voltage;
        cout << "Enter current (A): "; cin >> current;

        if (current != 0) {
            resistance = voltage / current;
            cout << "Calculated Resistance = " << resistance << " Ohms" << endl;
        } else {
            cout << "Error: Current cannot be zero." << endl;
        }

        cout << "Do you want to run another calculation? (Y/N): ";
        cin >> userChoice;
    } while (userChoice != 'N' && userChoice != 'n');

    return 0;
}
