#include <iostream>
using namespace std;

int main() {
    double temperature;

    // Prompt user for input with clear engineering units
    cout << "Enter the temperature of the electrical cable (in °C): ";
    cin >> temperature;

    // Evaluation using if...else control structure
    if (temperature > 70.0) {
        cout << "Warning: Cable overheating detected." << endl;
    } else {
        cout << "Status: Cable temperature is within safe range." << endl;
    }

    return 0;
}
