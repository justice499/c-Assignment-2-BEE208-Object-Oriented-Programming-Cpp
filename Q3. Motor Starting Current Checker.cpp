#include <iostream>
using namespace std;

int main() {
    double ratedCurrent, startingCurrent;

    cout << "Enter the motor rated current (A): ";
    cin >> ratedCurrent;
    cout << "Enter the motor starting current (A): ";
    cin >> startingCurrent;

    if (startingCurrent > (3.0 * ratedCurrent)) {
        cout << "Output: High starting current. Use proper motor starter." << endl;
    } else {
        cout << "Output: Starting current is acceptable." << endl;
    }

    return 0;
}
