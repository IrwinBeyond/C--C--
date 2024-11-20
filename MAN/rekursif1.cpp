#include<iostream>
using namespace std;

int f(int x){
    if (x==1 or x==2){
        return 1;
    } else {
        return f(x-1)+f(x-2);
    }
}

int main(){
    int x;

    cout << "Masukkan nilai f(x) = ";
    cin >> x;

    cout << "Ini adalah hasilnya\n";
    cout << "f("<<x<<") = "<<f(x);
}