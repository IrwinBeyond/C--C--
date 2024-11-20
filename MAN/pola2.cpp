#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for (int i = 1; i <= N;i++){
        for (int j = i + 1; j <= N;j++){
            cout << " ";
        }
        for (int k = 1; k <= i;k++){
            cout << "*";
        }
        cout << "\n";
    }
}