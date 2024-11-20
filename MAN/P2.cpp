#include<iostream>
using namespace std;

int main(){
    int N;
    int hasil;

    cout << "Selamat datang di Aplikasi Penebak Bilangan Kelipatan 4!" << endl;

    cout << "Masukkan nilai yang akan ditebak = ";
    cin >> N;
    hasil = N % 4;

    if (hasil == 0) {
            cout << "Ini adalah bilangan kelipatan 4!";
    }
    else {
        cout << "Ini bukanlah bilangan kelipatan 4!";
    }
}