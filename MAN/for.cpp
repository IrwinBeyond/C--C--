#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    int hasil = 0;
    for (int i = 0; i < N; i++) {
        int Bi;
        cin>>Bi;
        hasil += Bi;
    }
    cout<<hasil;
}