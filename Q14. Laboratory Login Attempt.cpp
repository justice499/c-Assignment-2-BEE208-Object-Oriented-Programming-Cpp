#include <iostream>
#include <string>
using namespace std;

int main() {
    string accessCode;
    int attempts = 0;
    bool granted = false;

    while (attempts < 3) {
        cout << "Enter laboratory access code: ";
        cin >> accessCode;
        attempts++;

        if (accessCode == "BEE208") {
            cout << "Access granted." << endl;
            granted = true;
            break;
        }
    }

    if (!granted) {
        cout << "Access denied. Maximum attempts reached." << endl;
    }
    return 0;
}
