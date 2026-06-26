#include <iostream>
using namespace std;

int main() {
    double explicitRating, totalLoad = 0.0;

    for (int i = 1; i <= 20; i++) {
        cout << "Enter power rating for appliance " << i << " (W): ";
        cin >> explicitRating;
        
        totalLoad += explicitRating;

        if (totalLoad > 5000.0) {
            cout << "Maximum load exceeded. Stop adding appliances." << endl;
            break;
        }
    }

    cout << "Final Total Combined Load = " << totalLoad << " W" << endl;
    return 0;
}
