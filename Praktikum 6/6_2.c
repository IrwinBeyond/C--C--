#include <stdio.h>

main(){
    int akademik, ketrampilan, psikologi;
    float rata = 0.0f;

    printf("Akademik = ");
    scanf("%d", &akademik);

    printf("Keterampilan = ");
    scanf("%d", &ketrampilan);

    printf("Psikologi = ");
    scanf("%d", &psikologi);

    rata = (akademik + ketrampilan + psikologi) / 3;

    if(rata>=75){
        if(akademik>ketrampilan && akademik>psikologi){
            printf("Diterima dan ditempatkan di bagian Administrasi");
        }
        else if(ketrampilan>akademik && ketrampilan>psikologi){
            printf("Diterima dan ditempatkan di bagian Produksi");
        }
        else{
            printf("Diterima dan ditempatkan di bagian Pemasaran");
        }
    }
    else{
        printf("Maaf anda tidak lulus");
    }
}