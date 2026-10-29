#include <iostream>
using namespace std;

int main () {
    int faculties;

    cout << "Pilih Angka (1, 2, 3, 4, 5, 6, 7, 8, 9)\n";
    cin >> faculties;

    switch(faculties) {
        case 1: 
        cout << "F-SCIENTICS" << endl;
        break; 

        case 2:
        cout << "F-MARTECH" << endl;
        break;

        case 3:
        cout << "F-INDSYS" << endl;
        break;

        case 4:
        cout << "F-ELECTICS" << endl;
        break;

        case 5: 
        cout << "F-CIVPLAN" << endl;
        break;

        case 6: 
        cout << "F-CREABIZ" << endl;
        break;

        case 7:
        cout << "F-VOCATION" << endl;
        break;

        case 8:
        cout << "IMT" << endl;
        break;

        case 9:
        cout << "F-MEDICS" << endl;
        break;
    
        default:
        cout << "Loe nyari Apaan?" << endl;
        break;
    }
    return 0;

    }



