#include <iostream>
#include <string>
using namespace std;

struct Buah {
    string nama;
    int jumlah;
    int harga;
};

Buah inputBuah() {
    Buah b;
    cout << "Nama Buah: ";
    cin >> b.nama;
    cout << "Jumlah: ";
    cin >> b.jumlah;
    cout << "Harga: ";
    cin >> b.harga;
    return b;
}

void dataBuah(Buah daftarBuah[], int n) {
    for (int i = 0; i < n; i++) {
        cout << daftarBuah[i].nama << " jumlah " << daftarBuah[i].jumlah << " harga " << daftarBuah[i].harga << endl;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah buah: ";
    cin >> n;

    Buah daftarBuah[n];

    for (int i = 0; i < n; i++) {
        daftarBuah[i] = inputBuah();
    }

    cout << endl;
    dataBuah(daftarBuah, n);

    return 0;
}