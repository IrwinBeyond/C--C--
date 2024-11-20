#include <stdio.h>

void triangular(int n){
    int hasil;
    for (int i = n; i > 0; i--){
        hasil += i;
        printf("%d", i);
        if (i>1){
            printf(" + ");
        }
    }
    printf(" = %d", hasil); 
}

main(){
    int n;
    printf("Masukkan nilai yang akan dihitung secara triangular : ");
    scanf("%d", &n);

    triangular(n);
}