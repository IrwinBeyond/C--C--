#include <stdio.h>

main(){
    int n,hasil=0;

    scanf("%d", &n);

    int i = 1;
    while(i<=n){
        printf("%d ", hasil);

        hasil += i;
        i++;
    }
}