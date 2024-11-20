#include <stdio.h>

main(){
    int a, b;

    printf("Masukkan 2 nilai : ");
    scanf("%d %d", &a, &b);

    if(a%b==0){
        printf("Bilangan pertama adalah kelipatan persekutuan bilangan kedua");
    }
    else{
        printf("Bilangan pertama bukan kelipatan persekutuan bilangan kedua");
    }
}