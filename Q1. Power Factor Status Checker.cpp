#include <iostream>
using namespace std;

int main() {
    double powerFactor;

    // Prompt user for input
    cout << "Enter the power factor of the electrical load: ";
    cin >> powerFactor;

    // Classification using if...else if...else
    if (powerFactor < 0.0 || powerFactor > 1.0) {
        cout << "Output: Invalid power factor" << endl;
    } else if (powerFactor >= 0.00 && powerFactor <= 0.50) {
        cout << "Output: Poor power factor" << endl;
    } else if (powerFactor > 0.50 && powerFactor <= 0.80) {
        cout << "Output: Fair power factor" << endl;
    } else if (powerFactor > 0.80 && powerFactor <= 0.95) {
        cout << "Output: Good power factor" << endl;
    } else {
        cout << "Output: Excellent power factor" << endl;
    }

    return 0;
}
