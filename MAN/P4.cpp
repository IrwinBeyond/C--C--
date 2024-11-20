#include<iostream>
using namespace std;

int main(){
    int satu[3];
    int dua[3];
    int tiga[3];
    int baris;

    cout << "Selamat datang di Aplikasi Pemutar Matriks!" << endl;

    cout << "Masukkan matriks"<<endl;
    for (baris = 1; baris <= 3; baris++){
        cin >> satu[baris];
    }

    for (baris = 1; baris <= 3; baris++){
        cin >> dua[baris];
    }

    for (baris = 1; baris <= 3; baris++){
        cin >> tiga[baris];
    }

    cout << "Ini adalah matriks yang sudah diputar!" << endl;
    cout << tiga[1] << " " << dua[1] << " " << satu[1] << endl;
    cout << tiga[2] << " " << dua[2] << " " << satu[2] << endl;
    cout << tiga[3] << " " << dua[3] << " " << satu[3] << endl;
}