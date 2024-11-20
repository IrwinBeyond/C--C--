#include <stdio.h>

int prima(int bil){
    if(bil<=1){
        return 0;
    }
    for (int i = 2; i * i <= bil;i++){
        if(bil%i==0){
            return 0;
        }
    }
    return 1;
}

main(){
    int n;

    printf("Masukkan bilangan prima : ");
    scanf("%d", &n);

    if(prima(n)){
        printf("%d adalah bilangan prima", n);
    }
    else{
        printf("%d bukan bilangan prima", n);
    }
}