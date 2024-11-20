#include <stdio.h>

main(){
    int a, b, c, d;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);

    d = b * b - 4 * a * c; 

    printf("Diskriminan = %d", d);
}