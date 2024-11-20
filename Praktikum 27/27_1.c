#include <stdio.h> 
void naikkan_nilai(int *x, int *y); 

main() { 
    int a = 3; 
    int b = 7; 

    printf("SEMULA : a = %d  b = %d\n", a, b);   
    naikkan_nilai(&a, &b); 
    printf("KINI   : a = %d  b = %d\n", a, b); 
} 

void naikkan_nilai(int *x, int *y){ 
    *x = *x + 2; 
    *y = *y + 2; 
}

