#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

struct student {
    int NRP;
    char nama[100];
    float eval1;
    float eval2;
    float eval3;
    float UAS;
};

struct nilai {
    float rata;
    float maks;
    float min;
    char huruf[3];
};

void Mean(struct student *mhs, struct nilai *grade, int batas);
void MaksMin(struct student *mhs, struct nilai *grade, int batas);
void Predikat(struct student *mhs, struct nilai *grade, int batas);

void MeanAll(struct nilai *grade, int batas, float *meanAll);
void MaksMinAll(struct nilai *grade, int batas, int *maxGrade, int *minGrade);
void MaksMinEval(struct student *mhs, int batas, int *maxEval1, int *maxEval2, int *maxEval3, int *minEval1, int *minEval2, int *minEval3);
void MaksMinUTS(struct student *mhs, int batas, int *maxUAS, int *minUAS);

int main(){
    int pilihan, data=0;
    char lagi;
    //Deklarasi sebagai pointer guna mengakses fungsi realloc untuk array dinamis
    struct student *mhs = NULL;
    struct nilai *grade = NULL;

    //Tampilan awal
    printf("Selamat Datang di Program Nilai Mahasiswa\noleh Irwin Ahmad Wiryawan NRP 3124600035\n\n");
    printf("Silahkan pilih menu anda:\n");
    printf("1.\tMenambahkan mahasiswa dan nilai\n2.\tMenampilkan data mahasiswa\n3.\tSelesai\n");

    //Program utama
    do {
        printf("\nPilihan anda: ");
        scanf("%d", &pilihan);
        fflush(stdin); //Menghapus buffer setiap ingin mengisi string

        //Menu pilihan
        switch (pilihan) {
            case 1:
                do {
                    //Menambah ukuran memori array setiap perulangan
                    mhs = realloc(mhs, (data + 1) * sizeof(struct student));
                    grade = realloc(grade, (data + 1) * sizeof(struct nilai));
                    //Mengecek apakah penambahan memori berhasil dijalankan
                    if (mhs == NULL) {
                        fprintf(stderr, "Alokasi Memori gagal\n");
                        return 1;
                    }

                    //Mengambil input data mahasiswa
                    printf("Data mahasiswa ke-%d\n", data+1);
                    printf("NRP:");
                    scanf("%d", &mhs[data].NRP);
                    fflush(stdin); //Menghapus buffer setiap ingin mengisi string
                    printf("Nama:");
                    fgets(mhs[data].nama, sizeof(mhs[data].nama), stdin);
                    mhs[data].nama[strcspn(mhs[data].nama, "\n")] = '\0'; // Menghilangkan karakter \n
                    printf("Nilai Eval1 Eval2 Eval3 UAS:");
                    scanf("%f %f %f %f", &mhs[data].eval1, &mhs[data].eval2, &mhs[data].eval3, &mhs[data].UAS);
                    fflush(stdin); //Menghapus buffer setiap ingin mengisi string

                    data++;
                    printf("Mau menambahkan lagi? (y/t): ");
                    scanf(" %c", &lagi); //Menghapus buffer setiap ingin mengisi string
                    fflush(stdin);

                } while (lagi == 'y' || lagi == 'Y');
                break;

            case 2:
                Mean(mhs, grade, data);
                MaksMin(mhs, grade, data);
                Predikat(mhs, grade, data);

                printf("\t\t\t\t\tDAFTAR NILAI\n");
                printf("----------------------------------------------------------------------------------------------\n");
                printf("No\tNRP\tNama\tEval1\tEval2\tEval3\tUAS\tRata-rata\tMaks\tMin\tHuruf\n");
                printf("----------------------------------------------------------------------------------------------\n");
                for (int i = 0; i < data; i++){
                    printf("%d\t", i + 1);
                    printf("%d\t", mhs[i].NRP);
                    printf("%s\t", mhs[i].nama);
                    printf("%g\t", mhs[i].eval1);
                    printf("%g\t", mhs[i].eval2);
                    printf("%g\t", mhs[i].eval3);
                    printf("%g\t", mhs[i].UAS);
                    printf("%.2f\t\t", grade[i].rata);
                    printf("%g\t", grade[i].maks);
                    printf("%g\t", grade[i].min);
                    printf("%s\t\n", grade[i].huruf);
                }
                printf("----------------------------------------------------------------------------------------------\n\n");

                float meanAll;
                int maxGrade, minGrade;
                int maxEval1, maxEval2, maxEval3, maxUAS;
                int minEval1, minEval2, minEval3, minUAS;
                
                MeanAll(grade, data, &meanAll);
                MaksMinAll(grade, data, &maxGrade, &minGrade);
                MaksMinEval(mhs, data, &maxEval1, &maxEval2, &maxEval3, &minEval1, &minEval2, &minEval3);
                MaksMinUTS(mhs, data, &maxUAS, &minUAS);

                printf("Nilai rata-rata seluruh mahasiswa : %.2f\n", meanAll);
                printf("Nilai mahasiswa tertinggi : %s dengan nilai %.2f\n", mhs[maxGrade].nama, grade[maxGrade].rata);
                printf("Nilai mahasiswa terendah : %s dengan nilai %.2f\n", mhs[minGrade].nama, grade[minGrade].rata);
                printf("Nilai mahasiswa dengan Eval1 tertinggi : %s dengan nilai %g\n", mhs[maxEval1].nama, mhs[maxEval1].eval1);
                printf("Nilai mahasiswa dengan Eval1 terendah : %s dengan nilai %g\n", mhs[minEval1].nama, mhs[minEval1].eval1);
                printf("Nilai mahasiswa dengan Eval2 tertinggi : %s dengan nilai %g\n", mhs[maxEval2].nama, mhs[maxEval2].eval2);
                printf("Nilai mahasiswa dengan Eval2 terendah : %s dengan nilai %g\n", mhs[minEval2].nama, mhs[minEval2].eval2);
                printf("Nilai mahasiswa dengan Eval3 tertinggi : %s dengan nilai %g\n", mhs[maxEval3].nama, mhs[maxEval3].eval3);
                printf("Nilai mahasiswa dengan Eval3 terendah : %s dengan nilai %g\n", mhs[minEval3].nama, mhs[minEval3].eval3);
                printf("Nilai mahasiswa dengan UAS tertinggi : %s dengan nilai %g\n", mhs[maxUAS].nama, mhs[maxUAS].UAS);
                printf("Nilai mahasiswa dengan UAS terendah : %s dengan nilai %g\n", mhs[minUAS].nama, mhs[minUAS].UAS);
        }
    } while (pilihan != 3);

    //Membersihkan alokasi memori
    free(mhs); 
    free(grade);

    return 0;
}

void Mean(struct student *mhs, struct nilai *grade, int batas){
    for (int i = 0; i < batas; i++){
        float sum = mhs[i].eval1 + mhs[i].eval2 + mhs[i].eval3 + mhs[i].UAS;
        grade[i].rata = sum / 4;
    }
}

void MaksMin(struct student *mhs, struct nilai *grade, int batas){
    for (int i = 0; i < batas; i++){
        grade[i].maks = mhs[i].eval1;
        grade[i].min = mhs[i].eval1;
        
        //Mencari maksimum
        if(mhs[i].eval2 > grade[i].maks)
            grade[i].maks = mhs[i].eval2;
        if(mhs[i].eval3 > grade[i].maks)
            grade[i].maks = mhs[i].eval3;
        if(mhs[i].UAS > grade[i].maks)
            grade[i].maks = mhs[i].UAS;

        //Mencari minimum
        if(mhs[i].eval2 < grade[i].min)
            grade[i].maks = mhs[i].eval2;
        if(mhs[i].eval3 < grade[i].min)
            grade[i].maks = mhs[i].eval3;
        if(mhs[i].UAS < grade[i].min)
            grade[i].maks = mhs[i].UAS;
    }
}

void Predikat(struct student *mhs, struct nilai *grade, int batas){
    for (int i = 0; i < batas;i++){
        if(round(grade[i].rata) >= 86 && round(grade[i].rata) <=100)
            strcpy(grade[i].huruf, "A");
        else if(round(grade[i].rata) >= 81 && round(grade[i].rata) < 86)
            strcpy(grade[i].huruf, "A-");
        else if(round(grade[i].rata) >= 76 && round(grade[i].rata) < 81)
            strcpy(grade[i].huruf, "AB");
        else if(round(grade[i].rata) >= 71 && round(grade[i].rata) < 76)
            strcpy(grade[i].huruf, "B+");
        else if(round(grade[i].rata) >= 66 && round(grade[i].rata) < 71)
            strcpy(grade[i].huruf, "B");
        else if(round(grade[i].rata) >= 61 && round(grade[i].rata) < 66)
            strcpy(grade[i].huruf, "BC");
        else if(round(grade[i].rata) >= 56 && round(grade[i].rata) < 61)
            strcpy(grade[i].huruf, "C");
        else if(round(grade[i].rata) >= 41 && round(grade[i].rata) < 56)
            strcpy(grade[i].huruf, "D");
        else
            strcpy(grade[i].huruf, "E");
    }
}

void MeanAll(struct nilai *grade, int batas, float *meanAll){
    float sum = 0;
    *meanAll = 0;
    for (int i = 0; i < batas; i++){
        sum += grade[i].rata;
    }
    *meanAll = sum / batas;

}

void MaksMinAll(struct nilai *grade, int batas, int *maxGrade, int *minGrade){
    *maxGrade = 0;
    *minGrade = 0;

    //Mencari maksimum
    for (int i = 0; i < batas; i++){
        if (grade[i].rata > grade[*maxGrade].rata)
            *maxGrade = i;
    }
    
    //Mencari minimum
    for (int i = 0; i < batas; i++){
        if (grade[i].rata < grade[*minGrade].rata)
            *minGrade = i;
    }
}

void MaksMinEval(struct student *mhs, int batas, int *maxEval1, int *maxEval2, int *maxEval3, int *minEval1, int *minEval2, int *minEval3){
    *maxEval1 = 0, *maxEval2 = 0, *maxEval3 = 0;
    *minEval1 = 0, *minEval2 = 0, *minEval3 = 0;

    //Mencari maksimum
    for (int i = 0; i < batas; i++){
        if (mhs[i].eval1 > mhs[*maxEval1].eval1)
            *maxEval1 = i;
    }
    for (int i = 0; i < batas; i++){
        if (mhs[i].eval2 > mhs[*maxEval2].eval2)
            *maxEval2 = i;
    }
    for (int i = 0; i < batas; i++){
        if (mhs[i].eval3 > mhs[*maxEval3].eval3)
            *maxEval3 = i;
    }

    //Mencari minimum
    for (int i = 0; i < batas; i++){
        if (mhs[i].eval1 < mhs[*minEval1].eval1)
            *minEval1 = i;
    }
    for (int i = 0; i < batas; i++){
        if (mhs[i].eval2 < mhs[*minEval2].eval2)
            *minEval2 = i;
    }
    for (int i = 0; i < batas; i++){
        if (mhs[i].eval3 < mhs[*minEval3].eval3)
            *minEval3 = i;
    }
}

void MaksMinUTS(struct student *mhs, int batas, int *maxUAS, int *minUAS){
    *maxUAS = 0;
    *minUAS = 0;
    //Mencari maksimum
    for (int i = 0; i < batas; i++){
        if (mhs[i].UAS > mhs[*maxUAS].UAS)
            *maxUAS = i;
    }

    //Mencari minimum
    for (int i = 0; i < batas; i++){
        if (mhs[i].eval1 < mhs[*minUAS].eval1)
            *minUAS = i;
    }
}