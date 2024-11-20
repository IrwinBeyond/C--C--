#include <bits/stdc++.h>
using namespace std;

bool cek(int px){
    for (int i = 2; i <= trunc(sqrt(px));i++){
        if(px%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    for (int i = 2; i <= n;i++){
        if(cek(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}