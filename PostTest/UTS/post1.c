#include <stdio.h>

main(){
    int N,genap=0,ganjil=0;
    printf("Masukkan jumlah bilangan : ");
    scanf("%d", &N);

    for (int i = 1; i <= N;i++){
        if(i%2==0){
            genap += i;
        }
        else{
            ganjil += i;
        }
    }
    printf("Jumlah bilangan genap = %d\n", genap);
    printf("Jumlah bilangan ganjil = %d", ganjil);
}