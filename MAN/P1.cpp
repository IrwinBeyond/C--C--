#include<iostream>
using namespace std;

int main(){
    int N;
    int hasil;

    cout << "Selamat datang di Aplikasi Menghitung Luas Lingkaran!" << endl;

    cout << "Masukkan nilai jari-jari lingkaran = ";
    cin >> N;

    hasil = 22/7 * N * N;

    cout << "Berikut adalah luas lingkaran Anda = " << hasil;
}