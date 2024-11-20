#include <stdio.h>
#include <limits.h>

main(){
    char cek;

    do{
        //todo ==== TUGAS 3 ====
        // int n, i = 0;

        // scanf("%d", &n);
        // while (i<n && i<100){
        //     i++;
        //     if(i%7==0){
        //         continue;
        //     }
        //     if(i%11==0){
        //         continue;
        //     }
        //     if(i%2==1){
        //         printf("%d ", i);
        //     }
        // }
        
        //todo ==== TUGAS 4 ====
        // int n, nilai, max = INT_MIN, min = INT_MAX;
        // float total;

        // printf("Masukkan jumlah data nilai : ");
        // scanf("%d", &n);

        // for (int i = 1; i <= n;i++){
        //     printf("Nilai ke-%d : ", i);
        //     scanf("%d", &nilai);

        //     total += nilai;
        //     if(nilai>max){
        //         max = nilai;
        //     }
        //     if(nilai<min){
        //         min = nilai;
        //     }
        // }
        // printf("Maksimal = %d\n", max);
        // printf("Minimal = %d\n", min);
        // printf("Rata-rata = %.2f", total/n);

        //todo ==== TUGAS 5 ====
        // int n,count=0;

        // scanf("%d", &n);
        // for (int i = 1; i <= n;i++){
        //     for (int j = 1; j <= n;j++){
        //         count += 1;
        //         printf("%d ", count);
        //     }
        //     printf("\n");
        //     count = 0;
        // }

        //todo ==== TUGAS 6 ====
        // int n;

        // scanf("%d", &n);
        // for (int i = 1; i <= n;i++){
        //     for (int j = 1; j <= i;j++){
        //         printf("%d ", i);
        //     }
        //     printf("\n");
        // }

    printf("Apakah anda ingin keluar? ");
    scanf(" %c", &cek);
    }
    while (cek == 't');
}