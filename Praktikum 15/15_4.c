#include <stdio.h>
#include <math.h>
#define PI 3.14159f

float rad(int drjt){
    return drjt / 180.0f * PI;
}



main(){
    int adj, x;
    printf("Masukkan garis AB : ");
    scanf("%d", &adj);
    printf("Masukkan sudut BAC : ");
    scanf("%d", &x);

    float radx = rad(x);
    float opp = tan(radx) * adj;
    printf("BC = %g", opp);
}