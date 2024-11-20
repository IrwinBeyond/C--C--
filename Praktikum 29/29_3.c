#include <stdio.h>
#include <stdlib.h>

struct chicken{
    char kode;
    char jenis[30];
    int harga;
};
struct pesanan{
    char kode;
    int qty;
    int jumlah;
};

struct chicken ayam[3] = {{'D',"Dada",5000},{'P',"Paha",4000},{'S',"Sayap",3000}};
struct pesanan pesan[30];

int hitungHarga(char jenis, int jmlOrd);

int main()
{
    int i,j;
    printf("Toko GFC-Gerobak Fried Chicken \n");
    printf("DAFTAR HARGA\n");
    printf("Kode\tJenis\tHarga per potong\n");
    for(i =0; i < 3; i++){
        printf("%c\t%s\tRp. %d.00\n", ayam[i].kode, ayam[i].jenis, ayam[i].harga);
    }
    printf("Harga belum termasuk pajak: 10%\n\n");
    printf("Masukkan Pesanan Anda\n");

    char lanjut = 't';
    int numOrd = 0;
    int jmlBayar = 0;
    //struct chicken pesanan [30];

    do{
        printf("Pesanan ke-%d\n",numOrd+1);

        fflush(stdin);

        printf("Jenis [D/P/S]\t: ");
        scanf("%c",&pesan[numOrd].kode);
        printf("Jumlah\t\t: ");
        scanf("%d",&pesan[numOrd].qty);
        pesan[numOrd].jumlah = hitungHarga(pesan[numOrd].kode,pesan[numOrd].qty);

        jmlBayar+= pesan[numOrd].jumlah;
        numOrd++;

        fflush(stdin);

        printf("Ada lagi (y/t)?: ");
        scanf("%c",&lanjut);

    }while(lanjut == 'Y' || lanjut == 'y');

    printf("\n\nNota Belanja Anda:\n");
    printf("\t\t\tGEROBAK FRIED CHICKEN\n");
    printf("===============================================================\n");
    printf(" No\tJenis Potong\tHarga Satuan\tQty\tJumlah Harga\n");
    printf("===============================================================\n");
    for(i=0;i<numOrd;i++){
        printf(" %d\t",i+1);

        for(j=0;j<3;j++){
            if(pesan[i].kode == ayam[j].kode){
                printf("%s\t", ayam[j].jenis);
                printf("\tRp. %d.00\t", ayam[j].harga);
            }
        }
        printf("%d\t", pesan[i].qty);
        printf("Rp. %d.00\n", pesan[i].jumlah);

    }

    printf("\n\t\t\tJumlah sebelum pajak\tRp. %d.00\n", jmlBayar);
    int pajak = jmlBayar*0.1;
    printf("\t\t\t\tPajak 10%% \tRp. %d.00\n",pajak);
    int bayar = jmlBayar + pajak;
    printf("\t\t\t\tTotal Bayar\tRp. %d.00\n",bayar);

    printf("\n\t\tTERIMA KASIH ATAS KUNJUNGAN ANDA\n");
    return 0;
}

int hitungHarga(char jenis, int jmlOrd){
    int i;
    for(i =0; i < 3; i++){
        if(ayam[i].kode == jenis){
            return jmlOrd*ayam[i].harga;
        }
    }
}
