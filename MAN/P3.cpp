#include<iostream>
using namespace std;

int main(){
    int N;
    int hasil = 1;

    cout << "Selamat datang di Aplikasi Penghitung Faktorial!" << endl;

    cout << "Masukkan nilai yang akan dihitung = ";
    cin >> N;

    for (int i = 1; i <= N; i++){
        hasil *= i;
    }

    cout << "Ini adalah hasilnya = " << hasil;
}