#include <stdio.h>

main(){
    int bulan, tanggal, tahun;

    printf("Masukkan tanggal : ");
    scanf("%d", &tanggal);
    printf("Masukkan bulan : ");
    scanf("%d", &bulan);
    printf("Masukkan tahun : ");
    scanf("%d", &tahun);

    switch (bulan)
    {
    case 1:
        if(tanggal>=1 && tanggal<=31){
            printf("Tanggal valid");
            break;
        }
        printf("Tanggal tidak valid");
        break;
    case 2:
        if(tanggal>=1 && tanggal<=29){
            if(tahun%4==0){
                if(tahun%100==0){
                    if(tahun%400==0){
                        printf("Tanggal valid");
                        break;
                    }
                    else{
                        printf("Tanggal tidak valid");
                        break;
                    }
                }
                else{
                    printf("Tanggal valid");
                    break;
                }
            }
            else{
            printf("Tanggal tidak valid");
            break;
            }
        }
        printf("Tanggal tidak valid");
        break;
    case 3:
        if(tanggal>=1 && tanggal<=31){
            printf("Tanggal valid");
            break;
        }
        printf("Tanggal tidak valid");
        break;
    case 4:
        if(tanggal>=1 && tanggal<=30){
            printf("Tanggal valid");
            break;
        }
        printf("Tanggal tidak valid");
        break;
    case 5:
        if(tanggal>=1 && tanggal<=31){
            printf("Tanggal valid");
            break;
        }
        printf("Tanggal tidak valid");
        break;
    case 6:
        if(tanggal>=1 && tanggal<=30){
            printf("Tanggal valid");
            break;
        }
        printf("Tanggal tidak valid");
        break;
    case 7:
        if(tanggal>=1 && tanggal<=31){
            printf("Tanggal valid");
            break;
        }
        printf("Tanggal tidak valid");
        break;
    case 8:
        if(tanggal>=1 && tanggal<=31){
            printf("Tanggal valid");
            break;
        }
        printf("Tanggal tidak valid");
        break;
    case 9:
        if(tanggal>=1 && tanggal<=30){
            printf("Tanggal valid");
            break;
        }
        printf("Tanggal tidak valid");
        break;
    case 10:
        if(tanggal>=1 && tanggal<=30){
            printf("Tanggal valid");
            break;
        }
        printf("Tanggal tidak valid");
        break;
    case 11:
        if(tanggal>=1 && tanggal<=30){
            printf("Tanggal valid");
            break;
        }
        printf("Tanggal tidak valid");
        break;
    case 12:
        if(tanggal>=1 && tanggal<=31){
            printf("Tanggal valid");
            break;
        }
        printf("Tanggal tidak valid");
        break;
    default:
        printf("Tanggal tidak valid");
        break;
    }
}