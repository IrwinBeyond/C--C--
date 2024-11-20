#include <stdio.h>

main(){
    int i,n,hasil=0;
    printf("Masukkan nilai : ");
    scanf("%d", &n);

    for (i = n; i > 0; i--){
        hasil += i;
        printf("%d", i);
        if (i>1){
            printf(" + ");
        }
    }
    printf(" = %d", hasil);
    return 0;
}