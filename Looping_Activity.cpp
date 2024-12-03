#include <iostream>

using namespace std;

bool isValidSymbol(char symbol) {
    return symbol == '*' || symbol == '#' || symbol == '^' || symbol == '$' || symbol == '@';
}

int main() {
    char symbols[] = {'*', '#', '^', '$', '@'};
    char first, second, third;

    // Get valid symbols from user
    do {
        cout << "Enter 1st symbol (*, ^, #, $, @): ";
        cin >> first;
    } while (!isValidSymbol(first));

    // Remove the chosen symbol from the array
    for (int i = 0; i < 5; i++) {
        if (symbols[i] == first) {
            symbols[i] = symbols[4];
            break;
        }
    }

    // Get the second symbol
    do {
        cout << "Enter 2nd symbol (*, ^, #, $, @): ";
        cin >> second;
    } while (!isValidSymbol(second));

    // Remove the chosen symbol from the array
    for (int i = 0; i < 4; i++) {
        if (symbols[i] == second) {
            symbols[i] = symbols[3];
            break;
        }
    }

    // Get the third symbol
    do {
        cout << "Enter 3rd symbol (*, ^, #, $, @): ";
        cin >> third;
    } while (!isValidSymbol(third));

    cout << "You picked: " << first << second << third << endl;

    // Activity F
    cout << "Activity F!\n";
    for (int i = 0; i < 9; i++) {
        cout << string(i, first) << " " << string(9 - i, first) << endl;
    }
    cout << string(9, first) << endl;

    // Activity G
    cout << "Activity G!\n";
    for (int i = 1; i <= 5; i++) {
        cout << (i % 2 ? "" : " ") << string(10, second) << endl;
    }

    // Activity H
    int rows;
    do {
        cout << "Enter the rows: ";
        cin >> rows;
    } while (rows <= 0);

    cout << "Activity H!\n";
    for (int i = rows; i > 0; i--) {
        cout << string(rows - i, first) << second << endl;
    }
    for (int i = 1; i <= rows; i++) {
        cout << string(rows - i, first) << second << endl;
    }

    // Activity I
    int n;
    do {
        cout << "Enter rows: ";
        cin >> n;
    } while (n <= 0);

    cout << "Activity I!\n";
    for (int i = n; i > 0; i--) {
        cout << string(n * 2, ' ') << string(n - i, second) << third << endl;
    }
    for (int i = 1; i < n - 2; i++) {
        cout << string(n * 2, first) << string(n, second) << third << endl;
    }
    for (int i = 1; i <= n; i++) {
        cout << string(n * 2, ' ') << string(i, second) << third << endl;
    }

    return 0;
}