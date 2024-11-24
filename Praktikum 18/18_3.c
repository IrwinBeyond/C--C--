#include <stdio.h>

main(){
    char btn;
    do{
        int brs, klm;
        printf("\nMasukkan jumlah baris dan kolom: ");
        scanf("%d %d", &brs, &klm);
        int M1[brs][klm], M2[brs][klm], M3[brs][klm];
        printf("Masukkan nilai matriks 1 (kiri ke kanan): ");
        for (int i = 0; i < brs;i++){
            for (int j = 0; j < klm;j++){
                scanf("%d", &M1[i][j]);
            }
        }
        printf("Masukkan nilai matriks 2 (kiri ke kanan): ");
        for (int i = 0; i < brs;i++){
            for (int j = 0; j < klm;j++){
                scanf("%d", &M2[i][j]);
            }
        }
        for (int i = 0; i < brs; i++){
            for (int j = 0; j < klm; j++){
                M3[i][j] = M1[i][j] + M2[i][j];
            }

        }
        printf("Matriks 1\n");
        for (int i = 0; i < brs; i++){
            for (int j = 0; j < klm; j++){
                printf("%d ", M1[i][j]);
            }
            printf("\n");
        }
        printf("Matriks 2\n");
        for (int i = 0; i < brs; i++){
            for (int j = 0; j < klm; j++){
                printf("%d ", M2[i][j]);
            }
            printf("\n");
        }
        printf("Matriks 3\n");
        for (int i = 0; i < brs; i++){
            for (int j = 0; j < klm; j++){
                printf("%d ", M3[i][j]);
            }
            printf("\n");
        }
        printf("\nMau menghitung lagi?");
        fflush(stdin);
        scanf(" %c", &btn);
    } while (btn == 'y' || btn == 'Y');
    return 0;
}