#include <stdio.h>

main(){
    int n;
    printf("Masukkan rentang nilai : ");
    scanf("%d", &n);

    for (int i = 1; i < n;i++){
        if(i%2!=0){
            printf("%d ", i);
        }
    }
    return 0;
}