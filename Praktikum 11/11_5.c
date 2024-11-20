#include <stdio.h>

main(){
    int n,count=0;

    scanf("%d", &n);
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            count += 1;
            printf("%d ", count);
        }
        printf("\n");
        count = 0;
    }
}