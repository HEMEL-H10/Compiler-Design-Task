#include <iostream>
using namespace std;

int main() {

    string text;
    bool numeric = true;

    cout << "Enter input: ";
    cin >> text;

    for (int j = 0; j < text.size(); j++) {
        if (text[j] < '0' || text[j] > '9') {
            numeric = false;
            break;
        }
    }

    if (numeric)
        cout << "It is a numeric constant." << endl;
    else
        cout << "It is not numeric." << endl;

    return 0;
}
