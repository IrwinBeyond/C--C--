#include<iostream>
using namespace std;

int main(){
    int jml,nilai,max,min;
    cin>>jml;

    for(int i=1;i<=jml;i++){
        cin>>nilai;
        if(i == 1){
            min=nilai;
            max=nilai;
        }
        else{
            if(nilai>max){
                max=nilai;
            }
            if(nilai<min){
                min=nilai;
            }
        }
    }
    cout<<max<<" "<<min;
}