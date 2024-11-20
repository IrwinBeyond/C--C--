#include <stdio.h>

main(){
    int dec, bin[7], sisa, bagi;

    printf("Masukkan nilai desimal : ");
    scanf("%d", &dec);

    printf("Biner : ");

    if(dec == 0){
        printf("%d", dec);
    }

    int i = 0;
    while(dec>0){
        bin[i] = dec % 2;
        dec /= 2;
        i++;
    }

    for (int j = i-1; j >= 0;j--){
        printf("%d", bin[j]);
    }
}