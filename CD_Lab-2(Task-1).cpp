#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter any string: ";
    cin >> name;

    if (!((name[0] >= 'A' && name[0] <= 'Z') ||
          (name[0] >= 'a' && name[0] <= 'z') ||
          name[0] == '_')) {
        cout << "Invalid identifier." << endl;
        return 0;
    }

    for (int j = 1; j < name.size(); j++) {
        if (!((name[j] >= 'A' && name[j] <= 'Z') ||
              (name[j] >= 'a' && name[j] <= 'z') ||
              (name[j] >= '0' && name[j] <= '9') ||
              name[j] == '_')) {
            cout << "Invalid identifier." << endl;
            return 0;
        }
    }

    cout << "It is a valid identifier." << endl;
    return 0;
}
