#include <stdio.h>
#define MAKS 100

main(){
    int n, a[MAKS];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int maks = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i]>maks)
        {
            maks = a[i];
        }
    }

    printf("%d", maks);
}