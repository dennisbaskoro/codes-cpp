#include <iostream>
using namespace std;

void cekNilai(int &skor) {
    if (skor < 50) {
        skor += 20;
    } else if (skor >= 50 && skor <= 69) {
        skor += 15;
    } else if (skor >= 70 && skor <= 79) {
        skor += 10;
    } else if (skor >= 80 && skor <= 89) {
        skor += 5;
    }
}

int main() {
    int skor;

    cout << "Nilai awal: ";
    cin >> skor;

    cekNilai(skor);

    cout << "Nilai Akhir: " << skor << "\n";
    if (skor < 75) {
        cout << "Status: REMEDI\n";
    } else {
        cout << "Status: LULUS\n";
    }

    return 0;
}
