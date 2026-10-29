#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    if (str.length() <= 1) {
        return str;
    }
    return reverseString(str.substr(1)) + str[0];
}

int main() {
    string input;

    cout << "input:\n";
    cin >> input;

    cout << "\noutput:\n";
    cout << reverseString(input) << endl;

    return 0;
}