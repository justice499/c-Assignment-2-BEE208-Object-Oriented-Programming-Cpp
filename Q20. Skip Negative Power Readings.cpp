#include <iostream>
using namespace std;

int main() {
    double realPowerEntry, collectiveSum = 0.0;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter power reading " << i << " (W): ";
        cin >> realPowerEntry;

        if (realPowerEntry < 0.0) {
            cout << "Invalid reading skipped." << endl;
            continue;
        }

        collectiveSum += realPowerEntry;
    }

    cout << "\nTotal valid power monitoring aggregation = " << collectiveSum << " W" << endl;
    return 0;
}
