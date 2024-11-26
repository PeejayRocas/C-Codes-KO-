#include <iostream>
using namespace std;

int main() {
    int age;
    bool with_parent;
    double amount_of_money;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you with a parent? (1 for yes, 0 for no): ";
    cin >> with_parent;

    cout << "Enter your amount of money: ";
    cin >> amount_of_money;

    string movie_recommendation = (age < 13)
        ? (with_parent ? "G or PG movies" : "G movies")
        : (age < 16 ? "G, PG, or R movies" : "G, PG, or R movies");

    cout << "You can watch: " << movie_recommendation << endl;

    cout << (amount_of_money >= 7.50 ? "You can watch a matinee." : "Insufficient funds for a matinee.") << endl;

    return 0;
}

