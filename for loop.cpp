#include <iostream>

using namespace std;

int main() {
    int n = 5;

    // Perulangan untuk baris (1 sampai 5)
    for (int i = 1; i <= n; i++) {

        // 1. Perulangan untuk cetak spasi
        for (int spasi = n - i; spasi > 0; spasi--) {
            cout << " ";
        }

        // 2. Perulangan untuk cetak emoji uang
        for (int uang = i; uang > 0; uang--) {
            cout << "💰 ";
        }

        // 3. Pindah baris
        cout << endl;
    }

    return 0;
}