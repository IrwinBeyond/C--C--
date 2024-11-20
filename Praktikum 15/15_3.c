#include <stdio.h>

void tambah2(int *a, int *b){
    *a += 2;
    *b += 2;
}

main(){
    int a, b;
    printf("Masukkan a & b (pisahkan dengan spasi) : ");
    scanf("%d %d", &a, &b);

    tambah2(&a, &b);
    printf("%d %d", a, b);
}