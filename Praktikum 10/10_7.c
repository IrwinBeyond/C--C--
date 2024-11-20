#include <stdio.h>

int hitung_bulan(int, int, int);

main(){
    int a, b, c;

    printf("Masukkan berapa biaya awal : ");
    scanf("%d", &a);
    printf("Berapa cicilan yang mampu dibayarkan tiap bulan : ");
    scanf("%d", &b);
    printf("Berapa rata-rata kenaikan tiap tahun (%%) : ");
    scanf("%d", &c);

    int totalbulan = hitung_bulan(a, b, c);

    printf("Waktu yang dibutuhkan untuk melunasi biaya haji adalah %d bulan", totalbulan);
}

int hitung_bulan(int a, int b, int c) {
    int total_biaya = a;
    int total_cicilan = b;
    int bulan = 0, tahun = 0;

    while (total_cicilan < total_biaya) {
        bulan += 1;
        total_cicilan += b;
        printf("%d\n", total_cicilan);
        if (bulan % 12 == 0) {
            tahun += 1;
            total_biaya += (total_biaya * c / 100);
        }
    }
    return bulan;
}