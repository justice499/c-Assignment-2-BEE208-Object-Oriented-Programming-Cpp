#include <iostream>
using namespace std;

int main() {
    double temperature = 0.0;

    while (temperature <= 90.0) {
        cout << "Enter contemporary motor temperature (°C): ";
        cin >> temperature;
    }

    cout << "Motor temperature unsafe. Stop motor test." << endl;
    return 0;
}
