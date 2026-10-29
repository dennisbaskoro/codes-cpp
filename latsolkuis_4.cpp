#include <iostream>
#include <string>
using namespace std;

int main () {
    string tipeMember;
    string promoDay = "Yes";
    string promoDay2 = "No";
    int itemDibeli;
    int hargaItem = 50000;
    

    cout << "Tipe Membermu Apa?\n";
    cin >> tipeMember;
    cout << "Oke, tipe membermu: " << tipeMember << "... cie cie member gold" << endl;
    if (tipeMember == "Gold") {
       cout << "Loe beli berapa item?\n";
       cin >> itemDibeli;
       cout << "Oke, loe beli: " << itemDibeli << " item" << endl;
       if (itemDibeli >= 20) {
        cout << "Promo Day ga yaa\n";
        cin >> promoDay;
        cout << "Oke ternyata " << promoDay << endl;
        if (promoDay == "Yes") {
            cout << "Selamat! loe dapet diskon 30%!" << endl;
            cout << "Jadi harga total: " << ((hargaItem * itemDibeli) - (hargaItem * 0.30)) << " rupiah" << endl;
        } else {
            cout << "Selamat! loe dapet diskon 25%!" << endl;
            cout << "Jadi harga total: " << ((hargaItem * itemDibeli) - (hargaItem * 0.25)) << " rupiah" << endl;
        }
       } else {
        cout << "Selamat! loe dapet diskon 10%!" << endl;
        cout << "Jadi harga total: " << ((hargaItem * itemDibeli) - (hargaItem * 0.1)) << " rupiah" << endl;
       }
    } 
    if (tipeMember == "Silver") {
       cout << "Loe beli berapa item?\n";
       cin >> itemDibeli;
       cout << "Oke, loe beli: " << itemDibeli << " item" << endl;
       if (itemDibeli >= 20) {
        cout << "Promo Day ga yaa\n";
        cin >> promoDay;
        cout << "Oke ternyata " << promoDay << endl;
        if (promoDay == "Yes") {
            cout << "Selamat! loe dapet diskon 20%!" << endl;
            cout << "Jadi harga total: " << ((hargaItem * itemDibeli) - (hargaItem * 0.2)) << " rupiah" << endl;
        } else {
            cout << "Selamat! loe dapet diskon 15%!" << endl;
            cout << "Jadi harga total: " << ((hargaItem * itemDibeli) - (hargaItem * 0.15)) << " rupiah" << endl;
        }
       } else {
        cout << "Selamat! loe dapet diskon 5%!" << endl;
        cout << "Jadi harga total: " << ((hargaItem * itemDibeli) - (hargaItem * 0.05)) << " rupiah" << endl;
       }
    }
    return 0; 
}



