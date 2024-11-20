#include <stdio.h>

main(){
    int a, b=1, hasil=0;
    char jwb;

    while (1){
        printf("Masukkan bilangan ke-%d : ", b);
        scanf("%d", &a);

        printf("Mau masukkan data lagi [y/t] ? ");
        scanf(" %c", &jwb);

        hasil += a;

        if(jwb != 'y'){
            break;
        }
        b++;
    }
    printf("Total bilangan = %d", hasil);
}