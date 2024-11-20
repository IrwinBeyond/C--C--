#include <stdio.h>

main(){
    int *i;  
    int j=10, k, m[]={2, 5};  
    int **l;    

    i = m; 
    i++;    
    *i = j;    
    j = *i;    
    i = &j;    
    k = *(&j);  
    l = &i;

    printf("i = %d\nj = %d\nk = %d\nl = %d\nm = %d %d", *i, j, k, **l, m[0], m[1]);
}