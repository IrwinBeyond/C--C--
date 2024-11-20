#include <stdio.h>
#include <math.h>

main(){
    long bin, dec = 0;

    printf("Masukkan nilai biner : ");
    scanf("%ld", &bin);

    int i = 0;
    while(bin!=0){
        int digit = bin % 10;
        dec += digit * pow(2, i);
        bin /= 10;
        i++;
    }

    printf("Desimal = %d", dec);
}