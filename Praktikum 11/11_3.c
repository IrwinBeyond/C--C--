#include <stdio.h>

main(){
    int n, i = 0;

    scanf("%d", &n);
    while (i<n && i<100){
        i++;
        if(i%7==0){
            continue;
        }
        if(i%11==0){
            continue;
        }
        if(i%2==1){
            printf("%d ", i);
        }
    }
}