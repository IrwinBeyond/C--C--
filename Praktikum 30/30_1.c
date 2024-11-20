#include <stdio.h>
#include <string.h>

struct mahasiswa{
    char nama[50];
    float tugas;
    float uts;
    float uas;
};

struct nilai{
    float akhir;
    char grade;
};

int main(){
    int n, no = 0;

    printf("MENGHITUNG NILAI AKHIR\nMATA KULIAH KONSEP PEMROGRAMAN\n\n");
    printf("Berapa jumlah mahasiswa ? ");
    scanf("%d", &n);
    struct mahasiswa mhs[n];
    struct nilai final[n];

    printf("\nMasukkan DATA Mahasiswa\n\n");

    for (int i = 0; i < n;i++){
        printf("Mahasiswa ke-%d\n", i + 1);
        printf("Nama\t\t : ");
        fflush(stdin); //Menghapus buffer setiap ingin mengisi string
        fgets(mhs[i].nama, sizeof(mhs[i].nama), stdin);
        mhs[i].nama[strcspn(mhs[i].nama, "\n")] = '\0'; // Menghilangkan karakter \n
        printf("Nilai tugas\t : ");
        scanf("%f", &mhs[i].tugas);
        printf("Nilai uts\t : ");
        scanf("%f", &mhs[i].uts);
        printf("Nilai uas\t : ");
        scanf("%f", &mhs[i].uas);

        final[i].akhir = (0.2 * mhs[i].tugas) + (0.4 * mhs[i].uts) + (0.4 * mhs[i].uas);

        if(final[i].akhir>=80 && final[i].akhir<=100){
            final[i].grade = 'A';
        }
        else if(final[i].akhir>=70){
            final[i].grade = 'B';
        }
        else if(final[i].akhir>=60){
            final[i].grade = 'C';
        }
        else if(final[i].akhir>=50){
            final[i].grade = 'D';
        }
        else if(final[i].akhir<50 && final[i].akhir>=0){
            final[i].grade = 'E';
        }
        else{
            final[i].grade = '-';
        }
        
        printf("\n");
        no++;
    }

    printf("\t\t\tDAFTAR NILAI\n");
    printf("\t\tMATAKULIAH KONSEP PEMROGRAMAN\n");
    printf("---------------------------------------------------------------\n");
    printf("No\tNama\t\t\tNilai\t\t\tGrade\n");
    printf("\tMahasiswa\tTugas\tUTS\tUAS\tAkhir\t\t\n");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < no; i++){
        printf("%d\t",i+1);
        printf("%s\t", mhs[i].nama);
        printf("%g\t", mhs[i].tugas);
        printf("%g\t", mhs[i].uts);
        printf("%g\t", mhs[i].uas);
        printf("%g\t", final[i].akhir);
        printf("%c\t\n", final[i].grade);
    }

    printf("---------------------------------------------------------------\n");
    printf("\nTotal Mahasiswa = %d\n", no);
}