#include<iostream>
using namespace std;

int main(){
    int i,j,n,k;

    cin>>n>>k;
    for(i=1;i<=n;i++){
        if(i>1){
            cout<<" ";
        }
        if(i%k==0){
            cout<<"*";
        }
        else {
            cout<<i;
        }
    }
    cout<<"\n";
}