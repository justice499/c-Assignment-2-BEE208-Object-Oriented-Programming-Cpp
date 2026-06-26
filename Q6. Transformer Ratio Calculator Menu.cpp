#include <iostream>
using namespace std;

int main() {
    int choice;
    double vPrimary, vSecondary, nPrimary, nSecondary, result;

    cout << "--- Transformer Calculator Menu ---" << endl;
    cout << "1. Calculate turns ratio" << endl;
    cout << "2. Calculate secondary voltage" << endl;
    cout << "3. Calculate primary voltage" << endl;
    cout << "Select option (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter Primary Turns: "; cin >> nPrimary;
            cout << "Enter Secondary Turns: "; cin >> nSecondary;
            if(nSecondary != 0) {
                result = nPrimary / nSecondary;
                cout << "Turns Ratio = " << result << endl;
            } else cout << "Error: Secondary turns cannot be zero." << endl;
            break;
        case 2:
            cout << "Enter Primary Voltage (V): "; cin >> vPrimary;
            cout << "Enter Primary Turns: "; cin >> nPrimary;
            cout << "Enter Secondary Turns: "; cin >> nSecondary;
            if(nPrimary != 0) {
                result = (vPrimary * nSecondary) / nPrimary;
                cout << "Secondary Voltage = " << result << " V" << endl;
            } else cout << "Error: Primary turns cannot be zero." << endl;
            break;
        case 3:
            cout << "Enter Secondary Voltage (V): "; cin >> vSecondary;
            cout << "Enter Primary Turns: "; cin >> nPrimary;
            cout << "Enter Secondary Turns: "; cin >> nSecondary;
            if(nSecondary != 0) {
                result = (vSecondary * nPrimary) / nSecondary;
                cout << "Primary Voltage = " << result << " V" << endl;
            } else cout << "Error: Secondary turns cannot be zero." << endl;
            break;
        default:
            cout << "Invalid execution index choice." << endl;
    }
    return 0;
}
