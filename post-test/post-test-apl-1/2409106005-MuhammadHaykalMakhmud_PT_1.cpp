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

    if (isLogin){
        int pilihan ;
        cout << "Selamat datang " << username << endl;
        
        while(true){
            float meter, centimeter, mile, foot = 0;
            cout << "----------------------------------------------" << endl;
            cout << "Menu : " << endl;
            cout << "----------------------------------------------" << endl;
            cout << "1. Konversi Meter ke (Centimeter, Mile, Foot)" << endl;
            cout << "2. Konversi Centimeter ke (Meter, Mile, Foot" << endl;
            cout << "3. Konversi Mile ke (Meter, Centimeter, Foot)" << endl;
            cout << "4. Konversi Foot ke (Meter, Centimeter, Mile)" << endl;
            cout << "5. Keluar" << endl;
            cout << "----------------------------------------------" << endl;
            cout << "Pilihan : ";
            cin >> pilihan;

            if(pilihan == 1){
                cout << "Masukkan nilai Meter : ";
                cin >> meter;
                centimeter = meter * 100;
                mile = meter / 1609;
                foot = meter / 0.3048;

            }else if(pilihan == 2){
                cout << "Masukkan nilai Centimeter : ";
                cin >> centimeter;
                meter = centimeter / 100;
                mile = meter / 1609;
                foot = meter / 0.3048;

            }else if(pilihan == 3){
                cout << "Masukkan nilai Mile : ";
                cin >> mile;
                meter = mile * 1609;
                centimeter = meter * 100;
                foot = meter / 0.3048;

            }else if(pilihan == 4){
                cout << "Masukkan nilai Foot : ";
                cin >> foot;
                meter = foot * 0.3048;
                centimeter = meter * 100;
                mile = meter / 1609;
                
            }else if(pilihan == 5){
                cout << "Keluar Program";
                break;
            }else{
                cout << "Pilihan tidak tersedia" << endl;
            }

            cout << "-----------------" << endl;
            cout << "Hasil Konversi : " << endl;
            cout << "-----------------" << endl;
            cout << "Meter : " << meter << " m" << endl;
            cout << "Centimeter : " << centimeter << " cm" << endl;
            cout << "Mile : " << mile << " mil" << endl;
            cout << "Foot : " << foot << " ft" << endl;
            cout << "-----------------" << endl;
        }
    }
    return 0;
}