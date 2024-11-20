#include <stdio.h>

int C(int n){
    if(n==0){
        return 1;
    }
    else{
        return 2*C(n - 1) + 1;
    }
}

int S(int n){
    if(n==1){
        return 0;
    }
    else{
        return S(n - 1) + n - 1;
    }
}

main(){
    int N;
    printf("Masukkan nilai : ");
    scanf("%d", &N);

    printf("Hasil fungsi Cn = 2*Cn-1 + 1 dari n = %d adalah %d\n", N, C(N));
    printf("Hasil fungsi Sn = Sn-1 + n - 1 dari n = %d adalah %d", N, S(N));
}