#include <stdio.h>

main(){   
    int x = 1, y = 2, *ip;  

    ip = &x;  
    y = *ip;    
    *ip = 3;

    printf("%p %p %p\n", &x, &y, &ip);
    printf("x = %d, y = %d", x, y); 
}