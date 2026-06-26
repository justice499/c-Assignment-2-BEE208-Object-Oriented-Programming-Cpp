#include <iostream>
using namespace std;

int main() {
    double voltage = 18.0;

    while (voltage >= 18.0) {
        cout << "Enter current solar panel voltage output (V): ";
        cin >> voltage;
    }

    cout << "Solar panel voltage below operating level." << endl;
    return 0;
}
