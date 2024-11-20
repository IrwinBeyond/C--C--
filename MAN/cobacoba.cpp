#include<iostream>
using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B >> C;
    A = B;
    B = C;
    C = A;

    cout << A + B + C;
}