#include <stdio.h>

main(){
    int harga, diskon = 0;

    printf("Masukkan harga : ");
    scanf("%d", &harga);

    if (harga >= 100000){
        diskon = harga * 0.05;
        printf("Selamat anda mendapatkan diskon 5%%!\nTotal pembelian adalah Rp%d", harga-diskon);
    }
    else if(harga<100000){
        printf("Total pembelian adalah Rp%d", harga);
    }
}