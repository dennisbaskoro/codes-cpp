#include <iostream> // merupaka  PRE PROCESSOR DIRECTIVE untuk menyertakan library ke program
using namespace std; // menggunakan wadah std (standard) untuk fungsi fungsi di program

int main () { // fungsi main (awal) agar sistem operasi tahu dari mana programnya dijalankan
    int number;

    cout << "input:\n";
    cin >> number;

    cout << "output:\n";
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0; //sebuah tanda bahwa program dieksekusi dengan sukses
}