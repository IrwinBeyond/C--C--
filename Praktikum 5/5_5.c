#include <stdio.h>

main(){
    float a = 0.0f, b = 0.0f;

    printf("Masukkan nilai : ");
    scanf("%f %f", &a, &b);

    if(b!=0){
        printf("%.3f", a / b);
    }
    else{
        printf("Tidak bisa dibagi dengan 0");
    }
}