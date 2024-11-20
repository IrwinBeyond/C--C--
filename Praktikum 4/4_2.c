#include <stdio.h>

main(){
    int gaji, anak, krjperhari, masakrj;
    char nikah;

    printf("Gaji pokok : ");
    scanf("%d", &gaji);

    printf("Anak : ");
    scanf("%d", &anak);

    printf("Masuk kerja (hari) : ");
    scanf("%d", &krjperhari);

    printf("Masa kerja (tahun) : ");
    scanf("%d", &masakrj);

    float tnj_pasutri = 0.1 * gaji;
    float tnj_anak = 0.05 * gaji * anak;
    int thr = 5000 * masakrj;
    int transp = 3000 * krjperhari;
    int asuransi = 20000;
    float pajak = 0.15 * (gaji + tnj_pasutri + tnj_anak);

    printf("Sudah menikah?\nJawab dengan y/n : ");
    scanf(" %c", &nikah);

    int bruto;
    if (nikah == 'y'){
        bruto = gaji + tnj_pasutri + tnj_anak + thr + transp;
    }
    else if (nikah == 'n'){
        bruto = gaji + tnj_anak + thr + transp;
    }
    else{
        printf("Tolong dijawab dengan benar!");
        return 1;
    }

    int pendapatan = bruto - pajak - asuransi;

    printf("Pendapatan adalah %d", pendapatan);
}