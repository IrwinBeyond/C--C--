#include <stdio.h>

main(){
    float c, f;

    printf("Celcius = ");
    scanf("%f", &c);

    f = c * 1.8 + 32;

    printf("Fahrenheit = %.2f", f);
}