#include<iostream>
using namespace std;

int f(int x){
    if (x==1){
        return 1;
    } else if (x==2){
        return 2;
    } else if (x==3){
        return 3;
    } else {
        return f(x - 1) + 2 * f(x - 2) + 3 * f(x - 3);
    }
}

int main(){
    int x;

    cout << "Masukkan nilai f(x) = ";
    cin >> x;

    cout << "Ini adalah hasilnya\n";
    cout << "f("<<x<<") = "<<f(x);
}