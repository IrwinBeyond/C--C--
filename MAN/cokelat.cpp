#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    int D[N][N], G[N][N], hasil[N][N];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin>>D[i][j];
        }
    }

    for (int i = 0; i < N ; i++){
        for (int j = 0; j < N; j++){
            cin>>G[i][j];
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            hasil[i][j] = D[i][j] + G[i][j];
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout<<hasil[i][j];
            if (j+1<N){
                cout<<" ";  
            }
        }
        cout<<  ("\n");
    }
}