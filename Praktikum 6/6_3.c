#include <stdio.h>

main(){
    float a = 0.0f, b = 0.0f;
    int pilihan;

    printf("Masukkan bilangan pertama : ");
    scanf("%f", &a);
    printf("Masukkan bilangan kedua : ");
    scanf("%f", &b);
    printf("Menu Matematika\n1. Penjumlahan\n2. Pengurangann\n3. Pembagian\n4. Perkalian\n");
    printf("Masukkan pilihan anda : ");
    scanf("%d", &pilihan);

    switch(pilihan){
        case 1 :
            printf("Hasil operasi tersebut = ");
            printf("%.2f", a + b);
            break;
        case 2 :
            printf("Hasil operasi tersebut = ");
            printf("%.2f", a - b);
            break;
        case 3 :
            printf("Hasil operasi tersebut = ");
            printf("%.2f", a / b);
            break;
        case 4 :
            printf("Hasil operasi tersebut = ");
            printf("%.2f", a * b);
            break;
        default :
            printf("Tolong memilih pilihan yang tertera");
    }
}