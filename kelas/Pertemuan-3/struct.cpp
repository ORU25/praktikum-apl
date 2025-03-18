#include <iostream>
#include <cstring>
using namespace std;


struct datamhs {
    char nim[10];
    string nama;
};

struct datanilai {
    float nilai_uts;
    float nilai_uas;
};

typedef struct {
    datamhs mhs;
    datanilai nil;
} nilai;

int main() {
    nilai nilaimhs;
    strcpy(nilaimhs.mhs.nim, "6054");
    nilaimhs.mhs.nama = "Daffa";
    nilaimhs.nil.nilai_uts = 60;
    nilaimhs.nil.nilai_uas = 60;

    cout << "NIM : " << nilaimhs.mhs.nim << endl;
    cout << "Nama : " << nilaimhs.mhs.nama << endl;
    cout << "Nilai UTS : " << nilaimhs.nil.nilai_uts << endl;
    cout << "Nilai UAS : " << nilaimhs.nil.nilai_uas << endl;
}