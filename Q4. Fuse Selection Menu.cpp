#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "--- Fuse Selection Menu ---" << endl;
    cout << "1. 1.5 A Fuse" << endl;
    cout << "2. 10 A Fuse" << endl;
    cout << "3. 13 A Fuse" << endl;
    cout << "4. 20 A Fuse" << endl;
    cout << "5. 32 A Fuse" << endl;
    cout << "Select an option (1-5): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Application: Low-power electronic instrument protection." << endl;
            break;
        case 2:
            cout << "Application: Domestic lighting sub-circuits." << endl;
            break;
        case 3:
            cout << "Application: Household ring-main ring plugs (e.g., Kettles)." << endl;
            break;
        case 4:
            cout << "Application: Dedicated radial kitchen cookers / Air conditioners." << endl;
            break;
        case 5:
            cout << "Application: Industrial motor circuits and distribution boards." << endl;
            break;
        default:
            cout << "Invalid choice! Please select an option between 1 and 5." << endl;
    }

    return 0;
}
