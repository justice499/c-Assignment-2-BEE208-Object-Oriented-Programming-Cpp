#include <iostream>
using namespace std;

int main() {
    double L1, L2, L3, average;

    for (int set = 1; set <= 6; set++) {
        cout << "\n--- Current Reading Set " << set << " ---" << endl;
        cout << "Enter Line 1 current (A): "; cin >> L1;
        cout << "Enter Line 2 current (A): "; cin >> L2;
        cout << "Enter Line 3 current (A): "; cin >> L3;

        average = (L1 + L2 + L3) / 3.0;
        cout << "Average current for Set " << set << " = " << average << " A" << endl;
    }
    return 0;
}
