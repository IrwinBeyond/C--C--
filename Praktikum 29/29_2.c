#include <stdio.h>
#include <stdlib.h>

struct date {
    int month, day, year;
}today, tomorrow;

int cekKabisat(int tahun){
    if(tahun % 400 == 0) return 1;
    else if (tahun % 100 == 0) return 0;
    else if (tahun % 4 == 0) return 1;
    else return 0;
}

int main()
{
    int batas_hari = 0;
    int cekTahun = 0;

    printf("==Pengecekan hari besok==\n\n");
    printf("Today (Day Month Year):");
    scanf("%d %d %d", &today.day, &today.month, &today.year);

    printf("\nToday is %d-%d-%d\n", today.day, today.month, today.year);

    switch (today.month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            batas_hari = 31;
        break;

        case 4:
        case 6:
        case 9:
        case 11:
            batas_hari= 30;
        break;

        case 2:
            cekTahun = cekKabisat(today.year);
            if(cekTahun) batas_hari=29;
            else batas_hari = 28;
        break;
        default:
            printf("bulan tidak valid\n");
            exit(0);
        break;
    }

    if(1<=today.day && today.day <= batas_hari){// pengecakan date today valid atau tidak
        if(today.day == batas_hari){ //pengecekan akhir bulan
            tomorrow.day = 1;
            if(today.month == 12){ // pengecekan akhir tahun
                tomorrow.month = 1;
                tomorrow.year = today.year + 1;
            }
            else{
                tomorrow.month = today.month+1;
                tomorrow.year = today.year;
            }
        }
        else{
            tomorrow.day = today.day+1;
            tomorrow.month = today.month;
            tomorrow.year = today.year;
            }
        printf("Tomorrow is %d-%d-%d \n", tomorrow.day, tomorrow.month,tomorrow.year);
    }
    else{
        printf("Tanggal tidak valid\n");
    }
    return 0;
}
