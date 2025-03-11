#include <iostream>
using namespace std;
int main() {
    string nama[4] = {"budi", "andi", "joko", "joni"};
    int angka[4] = {1, 2, 3, 4};
    cout << nama[0] << endl;
    cout << angka[0] << endl;
    cout << sizeof(nama) << endl; //sizeof berfungsi untuk mengetahui ukuran memori jumlah bite pada array

    int panjangArray = sizeof(nama) / sizeof(nama[0]);

    cout << panjangArray << endl;
    
    for (int i = 0; i < panjangArray; i++) {
        cout << nama[i] << endl;
    }

    for (int x : angka) {
        cout << x << endl;
    }

    #define MAX_BUAH 100 // Ukuran maksimum array buah
    int panjang = 0; // Jumlah elemen saat ini
    string buah[MAX_BUAH]; // Array dengan ukuran tetap
    int pilihan, index;

    return 0;
}