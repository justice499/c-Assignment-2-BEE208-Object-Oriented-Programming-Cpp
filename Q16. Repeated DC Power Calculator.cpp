#include <iostream>
using namespace std;

int main() {
    double voltage, current, power;
    char option;

    do {
        cout << "\n--- DC Power Calculator (P = V * I) ---" << endl;
        cout << "Enter voltage (V): "; cin >> voltage;
        cout << "Enter current (A): "; cin >> current;

        power = voltage * current;
        cout << "Power Consumption = " << power << " W" << endl;

        cout << "Perform another calculation? (Y/N): ";
        cin >> option;
    } while (option == 'Y' || option == 'y');

    return 0;
}
