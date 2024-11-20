#include <stdio.h>

main(){
    char a;
    int spasi = 0, chara = 0;

    scanf(" %c", &a);

    while(a != '\n'){
        if(a==' '){
            spasi++;
        }
        else{
            chara++;
        }
        scanf("%c", &a);
    }
    printf("Jumlah karakter = %d\n", spasi);
    printf("Jumlah spasi = %d", chara);
}