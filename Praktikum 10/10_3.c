#include <stdio.h>
#include <limits.h>

main(){
    int a, b=1, hasil=0, max = INT_MIN, min = INT_MAX;
    char jwb;

    while (1){
        printf("Masukkan bilangan ke-%d : ", b);
        scanf("%d", &a);

        printf("Mau masukkan data lagi [y/t] ? ");
        scanf(" %c", &jwb);

        hasil += a;
        if(a>max){
            max = a;
        }
        else if(a<min){
            min = a;
        }

        if(jwb != 'y'){
            break;
        }
        b++;
    }
    printf("Rata-rata : %d\n", hasil/b);
    printf("Maksimum : %d\n", max);
    printf("Minimum : %d", min);
}