#include <stdio.h> 
char *my_strcpy(char *, char *); 

main(){ 
    char strA[80]="A string to be used for demonstration"; 
    char strB[80]; 

    my_strcpy(strB, strA); 
    puts(strB); 
} 

char *my_strcpy(char *destination, char *source) { 
    char *p = destination; 
    while (*source != '\0')  
        *p++ = *source++; 

    *p = '\0'; 
    return destination; 
}