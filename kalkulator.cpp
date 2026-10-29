#include <iostream>
using namespace std; // register class 
int main () {
 int operasi; // mendeklarasikan variabel operasi untuk menyimpan satu karakter simbol matematika (+,-,*,:)
 double num1, num2; // register variable angka 1 dan angka 2, double agar user bisa memasukkan pecahan & desimal juga.

 cout << "Pilih Operasi (1, 2, 3, 4): "; // memberikan pilihan kepada user, si user mau operasi apa.
 cin >> operasi; // menginput pilihan operasi user, lalu disimpan di variabel operasi yang kemudian akan di proses di switch.

 cout << "Masukkan dua angka: "; // menyuruh user untuk input angka pertama dan kedua
 cin >> num1 >> num2; // user memasukkan angka 1 dan 2 

 switch(operasi) { // untuk memeriksa pilihan pengguna mau operasi apa, dan menjalankannya.
  case 1: // kasus ketika user memilih operasi penjumlahan
  cout << "Hasil: " << num1 + num2 << endl; // output penjumlahan
  break; // mencegah program mengeksekusi semua case  langsung secara otomatis

  case 2: // kasus ketika user memilih operasi pengurangan
  cout << "Hasil: " << num1 - num2 << endl; // output pengurangan
  break; // mencegah program mengeksekusi semua case langsung secara otomatis


  case 3: // kasus ketika user memilih operasi perkalian
  cout << "Hasil: " << num1 * num2 << endl; // output perkalian
  break; // mencegah program mengeksekusi semua case langsung secara otomatis


  case 4: // kasus ketika user memilih operasi pembagian
  if (num2 != 0) // untuk mencegah adanya error saat ada pembagian dengan 0.
  cout << "Hasil: " << num1 / num2 << endl; // output pembagian
  else 
  cout << "Error: Pembagian dengan 0 adalah tidak terdefinisi. " << endl; // hasil output ketika user membagi dengan 0
  break; // mencegah program mengeksekusi semua case langsung secara otomatis

  default: 
  cout << "Operator tidak valid! " << endl; // jika user memasukkan pilihan operasi selain yang ada di piihan
  break;

 }
 return 0;

}