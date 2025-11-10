#include <iostream>
#include <string>
using namespace std;

int main() {
    string fName, lName, completeName;

    cout << "Type your first name: ";
    cin >> fName;

    cout << "Type your last name: ";
    cin >> lName;

    completeName = fName + " " + lName;

    cout << "Your full name is: " << completeName << endl;

    return 0;
}
