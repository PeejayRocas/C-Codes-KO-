#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char type;
    string level;
    double balance, rate = 0;

    cout << "Type (P/B): ";
    cin >> type;
    cout << "Level (Standard, Gold, Platinum): ";
    cin >> level;
    cout << "Balance: $";
    cin >> balance;

    if (type == 'P' || type == 'p') {
        if (level == "Standard") rate = 1.2;
        else if (level == "Gold") rate = (balance >= 1000 && balance < 5000) ? 1.9 : (balance >= 5000 ? 2.3 : 0);
    } else if (type == 'B' || type == 'b') {
        if (level == "Standard" && balance >= 1500) rate = 1.7;
        else if (level == "Platinum" && balance >= 10000) rate = 2.5;
    } else {
        cout << "Invalid type!\n";
        return 1;
    }

    if (rate > 0) {
        cout << fixed << setprecision(2);
        cout << "Rate: " << rate << "%\n";
    } else {
        cout << "Invalid input or balance!\n";
    }

    return 0;
}