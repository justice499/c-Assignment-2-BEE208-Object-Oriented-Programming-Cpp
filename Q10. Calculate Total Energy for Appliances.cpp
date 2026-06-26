#include <iostream>
using namespace std;

int main() {
    double power, time, energy, totalEnergy = 0.0;

    for (int i = 1; i <= 8; i++) {
        cout << "Enter Power rating for appliance " << i << " (Watts): ";
        cin >> power;
        cout << "Enter Usage time for appliance " << i << " (Hours): ";
        cin >> time;

        energy = power * time;
        totalEnergy += energy;
    }

    cout << "\nTotal Energy Consumed by all appliances = " << totalEnergy << " Wh" << endl;
    return 0;
}
