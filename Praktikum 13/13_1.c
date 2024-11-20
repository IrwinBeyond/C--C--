#include <stdio.h>

void menu(){
    printf("Pilihan menu\n");
}

main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        menu();
    }
}