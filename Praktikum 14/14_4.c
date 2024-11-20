#include <stdio.h>
#define PI 3.14159f

float radian(int drjt){
    return drjt / 180.0f * PI;
}

main(){
    int n;
    printf("Masukkan derajat : ");
    scanf("%d", &n);

    printf("Radian = %g", radian(n));
}