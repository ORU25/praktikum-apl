#include <iostream>
#include <iomanip>

using namespace std;

#define MAX_KB 100

string ACCOUNT[2] = {"MuhammadHaykalMakhmud", "2409106005"};
string keyboard[MAX_KB] = {"Keychron Q1 Max", "Noir Timeless82 v2"};
int harga[MAX_KB]= {4195000, 1370000 };
int panjang = 2;

int main() {
    string username, password;
    bool isLogin = false;
    int attempt = 3;
    while (attempt > 0) {    
        cout << "Masukkan Username : ";
        cin >> username;
        cout << "Masukkan Password : ";
        cin >> password;
        if (username == ACCOUNT[0] && password == ACCOUNT[1]){
            cout << "Login Berhasil" << endl;
            isLogin = true;
            break;
        }else{
            cout << "Login Gagal" << endl;
            attempt--;
        }
    }
    
    if (isLogin){
        int pilihan, index;

        cout << "Sistem Manajemen Mechanical Keyboard" << endl;
        do {
            cout << "Menu Program" << endl;
            cout << "1. Tambah Mechanical Keyboard" << endl;
            cout << "2. Tampilkan Mechanical Keyboard" << endl;
            cout << "3. Ubah Mechanical Keyboard" << endl;
            cout << "4. Hapus Mechanical Keyboard" << endl;
            cout << "5. Keluar" << endl;
            cout << "Pilihan: ";
            cin >> pilihan;

            switch (pilihan) {
                case 1:
                    if (panjang < MAX_KB) {
                        cout << "Masukkan nama keyboard: ";
                        cin.ignore();
                        getline(cin, keyboard[panjang]);
                        cout << "Masukkan harga keyboard: ";
                        cin >> harga[panjang];
                        panjang++;
                        cout << "Keyboard berhasil ditambahkan" << endl;
                    } else {
                        cout << "Kapasitas penuh! Tidak bisa menambah keyboard lagi."
                    << endl;
                    }
                    break;
                case 2:
                    if (panjang == 0) {
                        cout << "Belum ada Keyboard" << endl;
                        } else {
                        
                        cout << "+-----------------------+-------------+" << endl;
                        cout << "| Keyboard              | Harga (Rp)  |" << endl;
                        cout << "+-----------------------+-------------+" << endl;

                        for (int i = 0; i < panjang; i++) {
                            cout << "| " << left << setw(22) << keyboard[i] << "| " << right << setw(11) << harga[i] << " |" << endl;
                        }
                        cout << "+-----------------------+-------------+" << endl;
                    }    
                    break;
                case 3:
                    if (panjang == 0) {
                        cout << "Belum ada keyboard untuk diubah." << endl;
                    } else {
                        for (int i = 0; i < panjang; i++) {
                            cout << "keyboard ke-" << i + 1 << ": " << keyboard[i] << endl;
                        }
                        cout << "Masukkan nomor keyboard yang akan diubah: ";
                        cin >> index;
                        if (index > 0 && index <= panjang) {
                            cout << "Masukkan nama keyboard baru: ";
                            cin.ignore();
                            getline(cin, keyboard[index - 1]);
                            cout << "Masukkan harga keyboard: ";
                            cin >> harga[index-1];
                            cout << "keyboard berhasil diubah" << endl;
                        } else {
                            cout << "Nomor keyboard tidak valid" << endl;
                        }
                    }
                    break;
                case 4:
                    if (panjang == 0) {
                        cout << "Belum ada keyboard untuk dihapus." << endl;
                    } else {
                        for (int i = 0; i < panjang; i++) {
                            cout << "keyboard ke-" << i + 1 << ": " << keyboard[i] << endl;
                        }
                        
                        cout << "Masukkan nomor keyboard yang akan dihapus: ";
                        cin >> index;
                        if (index > 0 && index <= panjang) {
                            for (int i = index - 1; i < panjang - 1; i++) {
                                keyboard[i] = keyboard[i + 1]; 
                                harga[i] = harga[i + 1]; 
                            }
                            panjang--;
                            cout << "keyboard berhasil dihapus" << endl;
                        } else {
                            cout << "Nomor keyboard tidak valid" << endl;
                        }
                    }
                    break;
                case 5:
                    cout << "Program selesai" << endl;
                    break;
                default:
                    cout << "Pilihan tidak valid" << endl;
                    break;
            }
        } while (pilihan != 5);

    }
    return 0;
}