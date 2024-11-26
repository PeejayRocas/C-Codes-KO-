#include <iostream>
using namespace std;

int main() {
    double temperature;

    cout << "Enter the temperature in degrees: ";
    cin >> temperature;

    if (temperature <= 32) {
        cout << "Bring a heavy jacket." << endl;
    } else if (temperature < 50) {
        cout << "Bring a light jacket." << endl;
    } else {
        cout << "No jacket needed." << endl;
    }

    return 0;
}

