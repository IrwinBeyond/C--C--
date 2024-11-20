#include <stdio.h>

main(){
    int a, b, c, temp;
    printf("Masukkan bilangan yang akan diurutkan : ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }

    if(a>c){
        temp = a;
        a = c;
        c = temp;
    }

    if(b>c){
        temp = b;
        b = c;
        c = temp;
    }

    printf("Bilangan setelah diurutkan : %d %d %d", a, b, c);
}