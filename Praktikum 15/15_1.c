#include <stdio.h>

int max(int bil1, int bil2){
    int maks = bil1;
    if(maks<bil2){
        maks = bil2;
    }
    return maks;
}

main(){
    int n1, n2;

    printf("Masukkan bilangan pertama : ");
    scanf("%d", &n1);
    printf("Masukkan bilangan kedua : ");
    scanf("%d", &n2);

    printf("%d", max(n1, n2));
}