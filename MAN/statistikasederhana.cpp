#include<iostream>
using namespace std;

int main(){
    int a,b,jml[1000],max,min;
    cin>>a;

    for(b=1;b<=a;b++){
        cin>>jml[b];
    }
    max=jml[1];
    min=jml[1];

    for(b=1;b<=a;b++){
        if(jml[b]>=max){
            max=jml[b];
        }else
        if(jml[b]<=min){
            min=jml[b];
        }
    }
    cout<<max<<" "<<min;
}