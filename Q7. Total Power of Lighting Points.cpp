#include <iostream>
using namespace std;

int main() {
    double totalPower = 0.0;
    double currentWattage;

    for (int i = 1; i <= 12; i++) {
        cout << "Enter wattage for lighting point " << i << " (W): ";
        cin >> currentWattage;
        totalPower += currentWattage;
    }

    cout << "\nTotal lighting load = " << totalPower << " W" << endl;
    return 0;
}
