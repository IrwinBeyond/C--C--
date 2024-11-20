#include <stdio.h>
#include <stdlib.h>

struct barang{
    char size;
    char ukuran[10];
    int harga;
};

struct pesanan{
    char size;
    int qty;
    int total;
};

struct barang stok[3] = {{'S', "Small", 36000}, {'M', "Medium", 43000}, {'L', "Large", 62000}};

int main(){
    printf("\t\t\tToko LARIS\n");
    printf("\t\t\tDaftar Harga\n");
    printf("---------------------------------------------------------------\n");
    printf("Ukuran Baju\tNama Ukuran\tHarga per Potong\n");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < 3;i++){
        printf("\t%c\t%s\t\tRp.%d,-\n", stok[i].size, stok[i].ukuran, stok[i].harga);
    }
    printf("---------------------------------------------------------------\n\n");
    printf("Dapatkan diskon 20%% untuk pembelian lebih dari 10 potong...\n");
    printf("Jangan lupa, pajaknya ya...(10%% x <harga-diskon>)\n\n");

    int n;
    printf("Berapa jumlah data <maks 3> ?");
    scanf("%d", &n);
    printf("\n\n");
    struct pesanan pesan[n];
    while(n<=3 && n>0){

    }

    return 0;
}