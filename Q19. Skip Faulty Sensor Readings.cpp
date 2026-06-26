#include <iostream>
using namespace std;

int main() {
    double dataStream, sum = 0.0;
    int validReadingsCount = 0;

    for (int i = 1; i <= 12; i++) {
        cout << "Enter sensor channel value " << i << ": ";
        cin >> dataStream;

        if (dataStream == 999.0) {
            cout << "[Fault Condition Flagged - Reading Skipped]" << endl;
            continue;
        }

        sum += dataStream;
        validReadingsCount++;
    }

    if (validReadingsCount > 0) {
        cout << "\nAverage value of valid sensor configurations = " << (sum / validReadingsCount) << endl;
    } else {
        cout << "\nNo valid datasets retrieved." << endl;
    }
    return 0;
}
