#include <stdio.h>

main(){
    int a;

    printf("Masukkan nilai : ");
    scanf("%d", &a);

    printf("Bilangan yang diinputkan adalah %d\n", a);
    if(a%2==0){
        printf("Bilangan tersebut adalah bilangan genap");
    }
    else{
        printf("Bilangan tersebut adalah bilangan ganjil");
    }
}