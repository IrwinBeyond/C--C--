#include <stdio.h>

main(){
    int menu;
    float a, r, h, result;
    const float pi = 3.14;

    printf("1. Menghitung volume kubus\n2. Menghitung luas lingkaran\n3. Menghitung volume silinder\n\n");
    printf("Masukkan pilihan anda : ");
    scanf("%d", &menu);

    switch (menu){
        case 1 :
            printf("\n- Volume Kubus -\nSisi kubus : ");
            scanf("%f", &a);

            result = a * a * a;

            printf("\nVolume kubus = %g", result);
            break;
        case 2 :
            printf("\n- Luas Lingkaran -\nJari-jari lingkaran : ");
            scanf("%f", &r);

            result = pi * r * r;

            printf("\nLuas lingkaran = %g", result);
            break;
        case 3 :
            printf("\n- Volume Silinder -\n");
            printf("Jari-jari lingkaran : ");
            scanf("%f", &r);
            printf("Tinggi silinder : ");
            scanf("%f", &h);

            result = pi * r * r * h;

            printf("\nVolume silinder = %g", result);
            break;
        default :
            printf("\nPilih menu dengan benar!");
    }
}