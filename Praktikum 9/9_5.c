#include <stdio.h>

main(){
    int n;
    scanf("%d", &n);

    for (int i = 2; i < n;i++){
        if(n%i==0){
            printf("Bilangan adalah bukan bilangan prima");
            return 1;
        }
    }
    printf("Bilangan adalah bilangan prima");
    return 0;
}