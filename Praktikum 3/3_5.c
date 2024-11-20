#include <stdio.h>
#include <math.h>

main(){
    float a, b, c, d;

    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    printf("c = ");
    scanf("%f", &c);

    d = pow(b,2) - 4 * a * c; 

    printf("Diskriminan = %.2f", d);
}