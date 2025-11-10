#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    bool multiComment = false;

    cout << "Type lines (write END to stop):" << endl;

    while (true) {
        getline(cin, input);
        if (input == "END") break;

        if (multiComment) {
            cout << "Currently inside a multi-line comment." << endl;

            if (input.find("*/") != string::npos) {
                multiComment = false;
            }
            continue;
        }

        if (input.find("//") != string::npos) {
            cout << "Single-line comment detected." << endl;
        }
        else if (input.find("/*") != string::npos) {
            cout << "Start of multi-line comment found." << endl;

            if (input.find("*/") == string::npos) {
                multiComment = true;
            }
        }
        else {
            cout << "This line is not a comment." << endl;
        }
    }

    return 0;
}
