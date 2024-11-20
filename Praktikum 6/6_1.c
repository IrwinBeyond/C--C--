#include <stdio.h>

main(){
    int suhu;

    printf("Masukkan nilai suhu : ");
    scanf("%d", &suhu);

    if(suhu<0){
        printf("Benda berbentuk padat");
    }
    else if(suhu>=0 && suhu<=100){
        printf("Benda berbentuk cair");
    }
    else{
        printf("Benda berbentuk gas");
    }
}