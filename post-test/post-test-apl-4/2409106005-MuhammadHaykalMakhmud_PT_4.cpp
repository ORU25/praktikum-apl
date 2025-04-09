#include <iostream>
#include <iomanip>

using namespace std;

#define MAX_ARRAY 100

struct User{
    string name;
    string NIM;
};

struct Keyboard{
    string nama;
    int harga;
    int stok;
};

User user[MAX_ARRAY] = {{"MuhammadHaykalMakhmud", "2409106005"}};
Keyboard keyboard[MAX_ARRAY]= {{"Keychron Q1 Max", 4195000, 10}, {"Noir Timeless82 v2", 1370000, 10}};

string username,password;

int panjang_user= 1;
int panjang_keyboard = 2;

int pilihan_login = 0;
int attempt = 3;
bool isLogin = false;

void Login(){
    cout << "LOGIN" << endl;
    cout << "Masukkan Username : ";
    cin >> username;
    cout << "Masukkan Password : ";
    cin >> password;

    for (int i = 0; i < panjang_user; i++) {
        if (username == user[i].name && password == user[i].NIM) {
            cout << "Login Berhasil" << endl;
            isLogin = true;
            break;
        }
    }

    if (!isLogin) {
        system("cls");
        cout << "Login Gagal" << endl;
        attempt--;
    }
}

void Register(){
    cout << "REGISTER" << endl;
    cout << "Masukkan Username : ";
    cin >> username;
    cout << "Masukkan Password : ";
    cin >> password;

    user[panjang_user].name = username;
    user[panjang_user].NIM = password;

    panjang_user++;

    system("cls");
    cout << "Register Berhasil" << endl;
}

bool AddKeyboard(Keyboard newKeyboard){
    keyboard[panjang_keyboard].nama = newKeyboard.nama;
    keyboard[panjang_keyboard].harga = newKeyboard.harga;
    keyboard[panjang_keyboard].stok = newKeyboard.stok;

    panjang_keyboard++;

    return true;
}

void ShowKeyboard(){
    system("cls");
    if (panjang_keyboard == 0) {
        cout << "Belum ada Keyboard" << endl;
    } else {
        
        cout << "+-----+-----------------------+-------------+---------+" << endl;
        cout << "| No  | Keyboard              | Harga (Rp)  | Stok    |" << endl;
        cout << "+-----+-----------------------+-------------+---------+" << endl;

        for (int i = 0; i < panjang_keyboard; i++) {
            cout << "| " << setw(3) << i + 1 << " | "
            << left << setw(22) << keyboard[i].nama << "| " 
            << right << setw(12) << keyboard[i].harga << "| " 
            << right << setw(7) << keyboard[i].stok << " |" << endl;
        }

        cout << "+-----+-----------------------+-------------+---------+" << endl;
    }    
}

bool UpdateKeyboard(int index, Keyboard newKeyboard){
    keyboard[index-1].nama = newKeyboard.nama;
    keyboard[index-1].harga = newKeyboard.harga;
    keyboard[index-1].stok = newKeyboard.stok;

    return true;
}

bool DeleteKeyboard(int index){
    for (int i = index - 1; i < panjang_keyboard - 1; i++) {
        keyboard[i] = keyboard[i + 1];
    }
    panjang_keyboard--;

    return true;
}

int main(){
    system("cls");
    while (pilihan_login !=3 && attempt > 0){
        isLogin = false;

        cout << "WELCOME" << endl;
        cout << "1. Login" << endl;
        cout << "2. Register" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan_login;

        switch (pilihan_login){
            case 1:
                Login();
                break;
            case 2:
                Register();               
                break;
            case 3:
                cout << "Keluar dari sistem" << endl;
                break;
            
            default:
                system("cls");
                cout << "Pilhan tidak valid" << endl;
                break;
        };

        if(isLogin){
            system("cls");
            int pilihan_menu, index;

            while (pilihan_menu != 5){
                cout << "MENU" << endl;
                cout << "1. Tambah Keyboard" << endl;
                cout << "2. Tampilkan Keyboard" << endl;
                cout << "3. Ubah Keyboard" << endl;
                cout << "4. Hapus Keyboard" << endl;
                cout << "5. Logout" << endl;
                cout << "Pilihan: ";
                cin >> pilihan_menu;

                switch (pilihan_menu){
                case 1:
                    system("cls");
                    if (panjang_keyboard < MAX_ARRAY) {
                        Keyboard newKeyboard;
                        cin.ignore();
                        cout << "Masukkan Nama Keyboard : ";
                        getline(cin, newKeyboard.nama);
                        cout << "Masukkan Harga Keyboard : ";
                        cin >> newKeyboard.harga;
                        cout << "Masukkan Stok Keyboard : ";
                        cin >> newKeyboard.stok;

                        if(AddKeyboard(newKeyboard)){
                            system("cls");
                            cout << "Keyboard berhasil ditambahkan" << endl;
                        }

                    } else {
                        system("cls");
                        cout << "Kapasitas penuh! Tidak bisa menambah keyboard lagi."
                    << endl;
                    } 
                    break;
                case 2:
                    ShowKeyboard();
                    break;
                case 3:
                    system("cls");
                    if (panjang_keyboard == 0) {
                        cout << "Belum ada Keyboard" << endl;
                    } else {
                        ShowKeyboard();
                        cout << "Masukkan nomor keyboard yang akan diubah: ";
                        cin >> index;

                        if (index > 0 && index <= panjang_keyboard) {

                            Keyboard newKeyboard;

                            cout << "Masukkan Nama Keyboard : ";
                            cin.ignore();
                            getline(cin, newKeyboard.nama);
                            cout << "Masukkan Harga Keyboard : ";
                            cin >> newKeyboard.harga;
                            cout << "Masukkan Stok Keyboard : ";
                            cin >> newKeyboard.stok;

                            if(UpdateKeyboard(index, newKeyboard)){
                                system("cls");
                                cout << "Keyboard berhasil diubah" << endl;
                            }
                            
                        } else {
                            system("cls");
                            cout << "Nomor keyboard tidak valid" << endl;
                        }
                    }
                    break;
                case 4:
                    system("cls");
                    if(panjang_keyboard == 0){
                        cout << "Belum ada Keyboard" << endl;
                    }else{
                        ShowKeyboard();
                        cout << "Masukkan nomor keyboard yang akan dihapus: ";
                        cin >> index;

                        if (index > 0 && index <= panjang_keyboard) {
                            if(DeleteKeyboard(index)){
                                system("cls");
                                cout << "Keyboard berhasil dihapus" << endl;
                            }
                        } else {
                            system("cls");
                            cout << "Nomor keyboard tidak valid" << endl;
                        }
                    }
                    break;
                case 5:
                    isLogin = false;
                    system("cls");
                    cout << "Logout" << endl;
                    break;
                
                default:
                    break;
                }
            }

        }
    };
};