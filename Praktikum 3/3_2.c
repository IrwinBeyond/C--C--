    #include <stdio.h>

    main(){
        int jml_uang;

        printf("Masukkan jumlah uang = ");
        scanf("%d", &jml_uang);

        int ratusanribu = jml_uang / 100000;
            int sisa = jml_uang - (ratusanribu * 100000);
            printf("%d lembar 100000\n", ratusanribu);

        int limapuluhribu = sisa / 50000;
            sisa -= (limapuluhribu * 50000);
            printf("%d lembar 50000\n", limapuluhribu);

        int duapuluhribu = sisa / 20000;
            sisa -= (duapuluhribu * 20000);
            printf("%d lembar 20000\n", duapuluhribu);

        int puluhanribu = sisa / 10000;
            sisa -= (puluhanribu * 10000);
            printf("%d lembar 10000\n", puluhanribu);

        int limaribu = sisa / 5000;
            sisa -= (limaribu * 5000);
            printf("%d lembar 5000\n", limaribu);

        int duaribu = sisa / 2000;
            sisa -= (duaribu * 2000);
            printf("%d lembar 2000\n", duaribu);

        int seribu = sisa / 1000;
            sisa -= (seribu * 1000);
            printf("%d lembar 1000\n", seribu);

        int limaratus = sisa / 500;
            sisa -= (limaratus * 500);
            printf("%d keping 500\n", limaratus);

        int duaratus = sisa / 200;
            sisa -= (duaratus * 200);
            printf("%d keping 200\n", duaratus);

        int ratusan = sisa / 100;
            sisa -= (ratusan * 100);
            printf("%d keping 100", ratusan);
    }