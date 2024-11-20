#include <stdio.h>

int ganjil(int bil){
    if(bil % 2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}

main(){
    int bil;
    printf("Masukkan nilai yang ingin dicek : ");
    scanf("%d", &bil);

    if(ganjil(bil)){
        printf("Bilangan %d adalah bilangan ganjil\n", bil);
    }
    else{
        printf("Bilangan %d adalah bilangan genap\n", bil);
    }
}
