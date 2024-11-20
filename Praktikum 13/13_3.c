#include <stdio.h>

float kuadrat(float x){
    return x * x;
}

main(){
    float N;
    printf("Masukkkan nilai yang akan dikuadratkan : ");
    scanf("%f", &N);

    printf("%g^2 = %g", N, kuadrat(N));
}