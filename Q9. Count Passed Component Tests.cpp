#include <iostream>
using namespace std;

int main() {
    int result, passed = 0, failed = 0;

    cout << "Enter test results for 15 components (1 for Pass, 0 for Fail):" << endl;
    for (int i = 1; i <= 15; i++) {
        cout << "Component " << i << ": ";
        cin >> result;
        if (result == 1) {
            passed++;
        } else {
            failed++;
        }
    }

    cout << "\n--- Final Test Diagnostic Summary ---" << endl;
    cout << "Total Passed Components: " << passed << endl;
    cout << "Total Failed Components: " << failed << endl;
    return 0;
}
