#include <iostream>
using namespace std;

int main() {

    string text;
    cout << "Enter any input: ";
    cin >> text;

    int opCount = 0;

    for (int j = 0; j < text.size(); j++) {
        char c = text[j];
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '=') {
            opCount++;
            cout << "Operator " << opCount << ": " << c << endl;
        }
    }

    return 0;
}
