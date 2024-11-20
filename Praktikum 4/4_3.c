#include <stdio.h>

main(){
    int jml, harga;

    printf("Beli berapa? ");
    scanf("%d", &jml);

    harga = jml / 3 * (2 * 50000) + jml % 3 * 50000;

    printf("Beli 2 gratis!\n");
    printf("Harganya adalah %d", harga);
}