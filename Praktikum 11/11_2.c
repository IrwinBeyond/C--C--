#include <stdio.h>

main(){
    int n, i = 0;

    scanf("%d", &n);

    while(i<n){
        i++;
        if(i%3 == 0){
            continue;
        }
        if(i%2 == 1){
            printf("%d ", i);
        }
    }
}