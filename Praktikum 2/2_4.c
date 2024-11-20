#include <stdio.h>

main(){
    float a;
    printf("Isi float = ");
    scanf("%f", &a);

    printf("Hasil %.2f dikali 50 = %.2f", a, a*50); //%.2f adalah untuk menentukan jumlah digit dibelakang koma hanya 2 digit
}