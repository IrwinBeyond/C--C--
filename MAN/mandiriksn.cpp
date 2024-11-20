#include<bits/stdc++.h>
using namespace std;

int x;
void f(int n){
    if (n>1){
        ++x;
        f((n >> 1) + (n & 1));
    }
}

int main(){
    f(1945);
    cout << x;
}