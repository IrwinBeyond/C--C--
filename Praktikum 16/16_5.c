#include <stdio.h>

int masukan(int n){
    int bil, jml = 0;
    for (int i = 0; i < n;i++){
        printf("%d. ", i + 1);
        scanf("%d", &bil);
        jml += bil;
    }
    return jml;
}

float average(int n, int jml){
    return (float)jml / n;
}

main(){
    int n;

    printf("Masukkan banyak data yang ingin dimasukkan : ");
    scanf("%d", &n);
    int jml = masukan(n);
    printf("Rata-rata = %g", average(n, jml));
}