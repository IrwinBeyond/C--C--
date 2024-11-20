#include<iostream>
using namespace std;

//Fungsi
int luas(int panjang, int lebar){
    return panjang * lebar;
}

//Utama
int main(){
    int panjang;
    int lebar;

    cout << "Selamat datang di Aplikasi Menghitung Luas Persegi Panjang!" << endl;

    cout << "Masukkan nilai panjang = ";
    cin >> panjang;
    cout << "Masukkan nilai lebar = ";
    cin >> lebar;

    cout << "Ini adalah hasil luas = " << luas(panjang, lebar);
}