#include <stdio.h>

main(){
    int n;
    printf("Masukkan nilai : ");
    scanf("%d", &n);

    for (int i = 1; i <= n;i++){
        int hasil = 0;
        for (int j = 1; j <= i/2;j++){
            if(i%j==0){
                hasil += j;
            }
        }
        if(i==hasil){
            printf("%d ", i);
        }
    }
}