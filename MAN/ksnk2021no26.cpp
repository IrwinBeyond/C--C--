#include<iostream>
using namespace std;

int cari(int left, int right){
    int mid = left;
    int res = 0;

    while(mid<=right){
        if(mid%11==0){
            res++;
            mid++;
        }
        else if(mid%12==0){
            mid++;
        }
        else {
            if(mid%4==0){
                res++;
            }
            mid++;
        }
    }
    return res;
}

int main(){
    cout << cari(1, 100)<<endl;
    cout << cari(1000, 2000);
}