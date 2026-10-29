#include <iostream>
#include <string>

using namespace std;

struct Student {
    string nrp;
    string name;
    float scores[4]
    float average;
    string status;
};

int main() {
    Student students[100];
    int jumlah;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        cout << "\n--- Data Mahasiswa Ke-" << i + 1 << " ---\n";
        
        cout << "Nama mahasiswa: ";
        getline(cin, students[i].name);
        
        cout << "NRP mahasiswa: ";
        getline(cin, students[i].nrp);

        cout << "Nilai Mathematics, Programming, Database Systems, Statistics: ";
        cin >> students[i].scores[0] >> students[i].scores[1] >> students[i].scores[2] >> students[i].scores[3];

        float total = students[i].scores[0] + students[i].scores[1] + students[i].scores[2] + students[i].scores[3];
        students[i].average = total / 4.0;

        if (students[i].average >= 75) { 
            students[i].status = "PASS";
        } else {
            students[i].status = "NEED ACADEMIC ASSISTANCE";
        }
    }

    cout << "\n=========================================\n";
    cout << "             LAPORAN AKADEMIK            \n";
    cout << "=========================================\n";

    for (int i = 0; i < jumlah; i++) {
        cout << "Nama      : " << students[i].name << endl;
        cout << "NRP       : " << students[i].nrp << endl;
        cout << "Nilai     : " << students[i].scores[0] << ", " 
                              << students[i].scores[1] << ", " 
                              << students[i].scores[2] << ", " 
                              << students[i].scores[3] << endl;
        cout << "Rata-rata : " << students[i].average << endl;
        cout << "Status    : " << students[i].status << endl;
        cout << "-----------------------------------------\n";
    }

    return 0;
}