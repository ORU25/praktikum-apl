#include <iostream>
using namespace std;

string USERNAME_ADMIN = "MuhammadHaykalMakhmud";
string PASSWORD_ADMIN = "2409106005";

int main() {
    string username, password;
    bool isLogin = false;
    int attempt = 3;
    while (attempt > 0) {    
        cout << "Masukkan Username : ";
        cin >> username;
        cout << "Masukkan Password : ";
        cin >> password;
        if (username == USERNAME_ADMIN && password == PASSWORD_ADMIN){
            cout << "Login Berhasil" << endl;
            isLogin = true;
            break;
        }else{
            cout << "Login Gagal" << endl;
            attempt--;
        }
    }

    
    return 0;
}