#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "input: ";
    cin >> n;

    cout << "output:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;

}