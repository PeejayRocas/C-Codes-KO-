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
     if (age < 13) 
        if (with_parent)
            cout << "You can watch G, PG, or R movie" << endl;
        else
            cout << "You can watch G movie" << endl;
     else if (age >= 13 && age < 16) 
        if (with_parent)
            cout << "You can watch G, PG, or R movie" << endl;
        else
            cout << "You can watch G or PG movie" << endl;
     else 
        cout << "You can watch G, PG, or R movie" << endl;
    if (amount_of_money >= 7.50)
        cout << "Not enough money." << endl;
	else if(amount_of_money < 10.5)
		cout << "can go to matinee show."
	else
        cout << "can go to evening & matinee show." << endl;

    return 0;
}

	
	
    