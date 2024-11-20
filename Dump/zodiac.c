#include <stdio.h>

main(){
    int tgl, bln;

    printf("Masukkan tanggal lahir : ");
    scanf("%d", &tgl);

    printf("Masukkan bulan lahir : ");
    scanf("%d", &bln);

    switch (bln)
    {
    case 1:
        if(tgl<21){
            printf("Sagittarius");
        }
        else if(tgl>=21 && tgl<=31){
                printf("Capricorn");
        }
        else{
            printf("Input tanggal dan bulan dengan benar!");
        }
        break;
    case 2:
        if(tgl<18){
            printf("Capricorn");
        }
        else if(tgl>=18 && tgl<=29){
                printf("Aquarius");
        }
        else{
            printf("Input tanggal dan bulan dengan benar!");
        }
        break;
    case 3:
        if(tgl<13){
            printf("Aquarius");
        }
        else if(tgl>=13 && tgl<=31){
                printf("Pisces");
        }
        else{
            printf("Input tanggal dan bulan dengan benar!");
        }
        break;
    case 4:
        if(tgl<19){
            printf("Pisces");
        }
        else if(tgl>=19 && tgl<=30){
                printf("Aries");
        }
        else{
            printf("Input tanggal dan bulan dengan benar!");
        }
        break;
    case 5:
        if(tgl<15){
            printf("Aries");
        }
        else if(tgl>=15 && tgl<=31){
                printf("Taurus");
        }
        else{
            printf("Input tanggal dan bulan dengan benar!");
        }
        break;
    case 6:
        if(tgl<23){
            printf("Taurus");
        }
        else if(tgl>=23 && tgl<=30){
                printf("Gemini");
        }
        else{
            printf("Input tanggal dan bulan dengan benar!");
        }
        break;
    case 7:
        if(tgl<22){
            printf("Gemini");
        }
        else if(tgl>=22 && tgl<=31){
                printf("Cancer");
        }
        else{
            printf("Input tanggal dan bulan dengan benar!");
        }
        break;
    case 8:
        if(tgl<12){
            printf("Cancer");
        }
        else if(tgl>=12 && tgl<=31){
                printf("Leo");
        }
        else{
            printf("Input tanggal dan bulan dengan benar!");
        }
        break;
    case 9:
        if(tgl<18){
            printf("Leo");
        }
        else if(tgl>=18 && tgl<=31){
                printf("Virgo");
        }
        else{
            printf("Input tanggal dan bulan dengan benar!");
        }
        break;
    case 10:
        if(tgl>=1 && tgl<=31){
            printf("Virgo");
        }
        else{
            printf("Input tanggal dan bulan dengan benar!");
        }
        break;
    case 11:
        if(tgl<25){
            printf("Libra");
        }
        else if(tgl>=25 && tgl<=30){
                printf("Scorpio");
        }
        else{
            printf("Input tanggal dan bulan dengan benar!");
        }
        break;
    case 12:
        if(tgl<19){
            printf("Ophiuchus");
        }
        else if(tgl>=19 && tgl<=31){
                printf("Sagittarius");
        }
        else{
            printf("Input tanggal dan bulan dengan benar!");
        }
        break;
    default:
        printf("Input tanggal dan bulan dengan benar!");
        break;
    }
}