#include <stdio.h>

void rotasi(int *aa, int *be, int *ce){
    int temp;
    temp = *aa;
    *aa = *be;
    *be = *ce;
    *ce = temp;
}

int main(){
    int a, b, c;
    printf("Masukkan 3 nilai secara urut(beri spasi setiap angka): ");
    scanf("%d %d %d", &a, &b, &c);

    rotasi(&a, &b, &c);
    printf("%d %d %d", a, b, c);
}

