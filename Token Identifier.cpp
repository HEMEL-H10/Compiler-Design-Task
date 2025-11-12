#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string getKeywordType(string word) {
    if (word == "int") return "int";
    else if (word == "float") return "float";
    else if (word == "double") return "double";
    else if (word == "char") return "char";
    else if (word == "string") return "string";
    else if (word == "if" || word == "else" || word == "for" || word == "while" || word == "return")
        return "control";
    else
        return "";
}

bool isKeyword(string word) {
    return getKeywordType(word) != "";
}

bool isPunctuation(char ch) {
    string punct = ";,':(){}[]=+-*/";
    return punct.find(ch) != string::npos;
}

int main() {
    ifstream file("Token.txt");
    if (!file) {
        cout << "Error: Cannot open file!" << endl;
        return 0;
    }

    string token;
    while (file >> token) {
        if (isKeyword(token)) {
            string type = getKeywordType(token);
            if (type == "control")
                cout << token << " --> Keyword (control keyword)" << endl;
            else
                cout << token << " --> Keyword (type: " << type << ")" << endl;
        }
        else if (isPunctuation(token[0]))
            cout << token << " --> Punctuation" << endl;
        else if (isdigit(token[0]))
            cout << token << " --> Number" << endl;
        else
            cout << token << " --> Variable" << endl;
    }

    file.close();
    return 0;
}
