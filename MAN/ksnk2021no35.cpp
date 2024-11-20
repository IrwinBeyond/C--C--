#include<iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    
    if(A-2 != 3 * B){
        C = C * 0;
    }
    A = A - 3;
    B = B - 3;
    A = A * 3;
    if(A<B){
        C = 1;
    }
    if (A>B){
        C = 2;
    }
    cout << C << endl;
}
