#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama_buah[3] = {"apel","jeruk", "nanas"};
    int jumlah_buah[3] = {3, 4, 5};

    for (int i = 0; i < 3; i++) {
        cout << nama_buah[i] << " jumlah " << jumlah_buah[i] << endl;
    }
    return 0;
}