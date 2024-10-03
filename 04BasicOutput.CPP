#include <iostream>
using namespace std;

int main() {
    string nickname, courseYearLevel;

    cout << "Enter your nickname: ";
    cin >> nickname;

    cout << "Enter your course-year-level: ";
    cin >> courseYearLevel;

    cout << "Wow! Congrats " << nickname << " – " << courseYearLevel
         << " is a nice course. And you are studying in one of the best schools in Our lady of lourdes college foundation." << endl;

    return 0;
}
