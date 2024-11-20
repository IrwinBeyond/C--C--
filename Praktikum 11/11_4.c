#include <stdio.h>
#include <limits.h>

main(){
    int n, nilai, max = INT_MIN, min = INT_MAX;
    float total;

    printf("Masukkan jumlah data nilai : ");
    scanf("%d", &n);

    for (int i = 1; i <= n;i++){
        printf("Nilai ke-%d : ", i);
        scanf("%d", &nilai);

        total += nilai;
        if(nilai>max){
            max = nilai;
        }
        if(nilai<min){
            min = nilai;
        }
    }
    printf("Maksimal = %d\n", max);
    printf("Minimal = %d\n", min);
    printf("Rata-rata = %.2f", total/n);
}