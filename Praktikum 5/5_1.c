#include <stdio.h>

main(){
    int a;

    printf("Masukkan nilai : ");
    scanf("%d", &a);

    if(a>=0){
        printf("Positif");
    }
    else if(a<0){
        printf("Negatif");
    }
}