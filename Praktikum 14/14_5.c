#include <stdio.h>

float celsius(float suhu, char asal){
    switch (asal)
    {
    case 'F':
        return (suhu - 32) * 5 / 9;
    case 'R':
        return suhu * 5 / 4;
    default:
        return suhu;
    }
}

float konversi(float c, char tujuan){
    switch (tujuan)
    {
    case 'F':
        return c * 9 / 5 + 32;
    case 'R':
        return c * 4 / 5;
    default:
        return c;
    }
}

main(){
    float n;
    char asal, tujuan;
    printf("Masukkan suhu sumber = ");
    scanf("%f", &n);

    printf("Masukkan satuan asal = ");
    scanf(" %c", &asal);
    printf("Masukkan satuan tujuan = ");
    scanf(" %c", &tujuan);

    float c = celsius(n, asal);
    float hasil = konversi(c, tujuan);

    printf("Hasil Konversi suhu %g %c = %g %c", n, asal, hasil, tujuan);
}