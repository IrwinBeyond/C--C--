#include<iostream>
using namespace std;

int fungsi(int nilai1, int nilai2){
    if (nilai2 == 0){
        return 1;
    } else {
        return nilai1*fungsi(nilai1,nilai2-1);
    }
}

int main(){
    int nilai1, nilai2;

    cout << "Masukkan nilai fungsi(nilai1,nilai2) = ";
    cin >> nilai1>>nilai2;

    cout << "Ini adalah hasilnya\n";
    cout << "fungsi("<<nilai1<<","<<nilai2<<") = "<<fungsi(nilai1, nilai2);
}