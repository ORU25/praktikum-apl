#include <iostream>
using namespace std;

string USERNAME_ADMIN = "muhammadHaykalMakhmud";
string PASSWORD_ADMIN = "2409106005";

bool login(string username, string password){
    if (username == USERNAME_ADMIN && password == PASSWORD_ADMIN){
            cout << "Login Berhasil" << endl;
            return true;
        }else{
            cout << "Login Gagal" << endl;
            return false;
        }
}

int main() {
    string username, password;
    int attempt = 3;
    while (attempt > 0) {    
        cout << "Masukkan Username : ";
        cin >> username;
        cout << "Masukkan Password : ";
        cin >> password;
        if (login(username,password)){
            break;
        }else{
            attempt--;
            attempt != 0 ? cout << "Anda masih memiliki " << attempt << " kesempatan" << endl : cout << "Anda sudah tidak memiliki kesempatan" << endl;
        }
    }

    return 0;
}