#include <stdio.h>

main()
{
    int hari;

    printf("1. Minggu\n2. Senin\n3. Selasa\n4. Rabu\n5. Kamis\n6. Jum'at\n7. Sabtu\n");
    printf("Pilih hari : ");
    scanf("%d", &hari);

    switch (hari){
        case 1 :
            printf("Minggu");
            break;
        case 2 :
            printf("Senin");
            break;
        case 3 :
            printf("Selasa");
            break;
        case 4 :
            printf("Rabu");
            break;
        case 5 :
            printf("Kamis");
            break;
        case 6 :
            printf("Jum'at");
            break;
        case 7 :
            printf("Sabtu");
            break;
        default :
            printf("Hari tidak valid");
            break;
    }
}