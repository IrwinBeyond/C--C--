#include <stdio.h>

main(){
    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[10] = {1,2,3,4,5,6,7,8,9,10}; 
    int *ip1, *ip2 = array2; 
    int *akhir = &array1[10]; 

    for(ip1 = &array1[0]; ip1 < akhir; ip1++){
        *ip2++ = *ip1;
        printf("nilai *ip1 = %d\n", *ip1);
        printf("nilai *ip2 = %d\n", *ip2);
        printf("=================\n");
    }
}
