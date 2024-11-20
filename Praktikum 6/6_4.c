#include <stdio.h>

main(){
    int a;

    printf("Nilai angka : ");
    scanf("%d", &a);

    if(a<=40){
        printf("E");
    }
    else if(a>40 && a<=55){
        printf("D");
    }
    else if(a>55 && a<=60){
        printf("C");
    }
    else if(a>60 && a<=80){
        printf("B");
    }
    else if(a>80 && a<=100){
        printf("A");
    }
    else{
        printf("Angka tidak boleh lebih dari 100");
    }
}