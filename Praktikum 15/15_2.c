#include <stdio.h>

int P(int n, int r){
    return faktorial(n) / faktorial(n - r);
}

int C(int n, int r){
    return faktorial(n) / (faktorial(r) * faktorial(n - r));
}

int faktorial(int bil){
    if(bil==0){
        return 1;
    }
    else{
        return bil * faktorial(bil-1);
    }
}

main(){
    int n, r;
    printf("Masukkan n dan r (pisahkan dengan spasi) : ");
    scanf("%d %d", &n, &r);

    printf("Permutasi = %d\n", P(n,r));
    printf("Kombinasi = %d", C(n,r));
}