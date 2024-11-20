#include <stdio.h>

long faktorial(long bil){
    if(bil==0){
        return 1;
    }
    else{
        return bil * faktorial(bil-1);
    }
}

main(){
    long n;

    printf("Masukkan nilai yang akan menjadi faktorial : ");
    scanf("%ld", &n);

    printf("%ld! = %ld", n, faktorial(n));
}