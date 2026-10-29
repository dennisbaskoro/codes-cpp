#include <iostream>

using namespace std;

int main() {
    int n = 5;
    int i = 1;

    while (i <= n) {
        // Cetak spasi di awal agar membentuk piramida
        int spasi = n - i;
        while (spasi > 0) {
            cout << " ";
            spasi--;
        }

        // Cetak emoji/karakter uang dan spasi
        int uang = i;
        while (uang > 0) {
            cout << " o ";
            uang--;
        }

        cout << endl;
        i++;
    }

    return 0;
}