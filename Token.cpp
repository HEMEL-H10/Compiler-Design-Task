#include <iostream>
#include <fstream>   // for ifstream
#include <string>    // for std::string
using namespace std;

int main() {
    ifstream file("Token.txt");  // open file for reading
    if (!file) {
        cerr << "Error: could not open file!" << endl;
        return 1;
    }

    string token;
    // read tokens (separated by spaces, tabs, or newlines)
    while (file >> token) {
        cout << "Token: " << token << endl;
    }

    file.close();
    return 0;
}
