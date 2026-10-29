#include <iostream>
#include <string>

using namespace std;

struct buah {
    int jumlah;
    int harga;
    string nama;
};

int main () {
    buah Daftarbuah[3];

    cout << "nama buah: \n";
    cin >> Daftarbuah[0].nama;
    cout << "jumlah buah: \n";
    cin >> Daftarbuah[0].jumlah;
    cout << "harga buah: \n";
    cin >> Daftarbuah[0].harga;

    cout << "nama buah: \n";
    cin >> Daftarbuah[1].nama;
    cout << "jumlah buah: \n";
    cin >> Daftarbuah[1].jumlah;
    cout << "harga buah: \n";
    cin >> Daftarbuah[1].harga;

    cout << "nama buah: \n";
    cin >> Daftarbuah[2].nama;
    cout << "jumlah buah: \n";
    cin >> Daftarbuah[2].jumlah;
    cout << "harga buah: \n";
    cin >> Daftarbuah[2].harga;

    cout << endl;

    cout << Daftarbuah[0].nama << " jumlah " << Daftarbuah[0].jumlah << " harga " << Daftarbuah[0].harga << endl;
    cout << Daftarbuah[1].nama << " jumlah " <<  Daftarbuah[1].jumlah << "harga " <<  Daftarbuah[1].harga << endl;
    cout << Daftarbuah[2].nama << " jumlah " << Daftarbuah[2].jumlah << " harga " << Daftarbuah[2].harga << endl;

    return 0;
}