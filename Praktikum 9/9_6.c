#include <stdio.h>

main(){
    int nilai, jam, ips;
    int nj = 0, totaljam = 0;
    char inputnilai;

    for (int i = 1; i <= 5; i++){
        printf("Nilai Mata Kuliah %d : ", i);
        scanf(" %c", &inputnilai);

        switch(inputnilai){
            case 'A':
                nilai = 4;
                break;
            case 'B':
                nilai = 3;
                break;
            case 'C':
                nilai = 2;
                break;
            case 'D':
                nilai = 1;
                break;
            case 'E':
                nilai = 0;
                break;
            default :
                printf("Tidak valid. Tolong isi dengan A,B,C,D,dan E\n");
                i--;
                continue;
        }

        printf("Jumlah jam : ");
        scanf("%d", &jam);

        nj += (nilai*jam);
        totaljam += jam;
    }
    ips = nj / totaljam;
    printf("Indeks Prestasi Semester : %d", ips);
}