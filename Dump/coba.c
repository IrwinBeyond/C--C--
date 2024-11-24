#include <stdio.h>
#include <string.h>
#define size 1000

int countLetter(char *kalimat, char track){
    int len = strlen(kalimat);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if(kalimat[i]==track)
            count++;
    }
    return count;
}

int main(){
    char kalimat[size], track;
    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\n")] = '\0';
    scanf("%c", &track);

    int count = countLetter(kalimat, track);
    printf("%d", count);
}