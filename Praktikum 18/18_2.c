#include <stdio.h>

main (){
    int n;
    scanf("%d", &n);

    int total = 0, fb1 = 1, fb2 = 1;
    printf("0 1 1 ");
    for (int i = 2; i < n-1; i++)
    {
        total = fb1 + fb2;
        fb1 = fb2;
        fb2 = total;
        printf("%d ", total);
    }
    
}