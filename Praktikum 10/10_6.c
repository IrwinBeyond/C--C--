#include <stdio.h>

main(){
    int hasil = 0, sisa = 0, bil;

    scanf("%d", &bil);
    printf("Jumlah angka dari bilangan %d = ", bil);

    while(bil != 0){
        sisa = bil % 10;
        hasil += sisa;
        bil /= 10;
    }
    printf("%d", hasil);
}
