#include <stdio.h>

main(){
    char a;

    while(1){
        scanf("%c", &a);

        if(a != 'X'){
            printf("%c", a);
        }
        else{
            break;
        }
    }
}