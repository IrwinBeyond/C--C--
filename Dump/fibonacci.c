#include <stdio.h>

main(){
    int n, bil1 = 0, bil2 = 1, bil3;
    scanf("%d", &n);

    printf("0 1 ");
    for (int i = 1; i <= n-2;i++){
        bil3 = bil1 + bil2;
        printf("%d ", bil3);
        bil1 = bil2;
        bil2 = bil3;
    }
}