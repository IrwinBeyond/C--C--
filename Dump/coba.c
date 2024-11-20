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
};

void mean(struct student *mhs, struct nilai *grade, int batas);
void MaksMin(struct student *mhs, struct nilai *grade, int batas);

int main() {
    int pilihan, i = 0;
    char lagi;
    struct student *mhs = NULL; //Deklarasi mhs sebagai pointer guna mengakses fungsi realloc untuk array dinamis
    struct nilai *grade = NULL;

    //Tampilan awal
    printf("Selamat Datang di Program Nilai Mahasiswa\noleh Irwin Ahmad Wiryawan NRP 3124600035\n\n");
    printf("Silahkan pilih menu anda:\n");
    printf("1.\tMenambahkan mahasiswa dan nilai\n2.\tMenampilkan data mahasiswa\n3.\tSelesai\n\n");

    //Program utama
    do {
        printf("Pilihan anda: ");
        scanf("%d", &pilihan);
        getchar(); //Menghapus buffer setiap ingin mengisi string

        //Menu pilihan
        switch (pilihan) {
            case 1:
                do {
                    //Menambah ukuran memori array setiap perulangan
                    mhs = realloc(mhs, (i + 1) * sizeof(struct student));
                    grade = realloc(grade, (i + 1) * sizeof(struct nilai));
                    //Mengecek apakah penambahan memori berhasil dijalankan
                    if (mhs == NULL || grade == NULL) {
                        fprintf(stderr, "Alokasi Memori gagal\n");
                        return 1;
                    }

                    //Mengambil input data mahasiswa
                    printf("Data mahasiswa ke-%d\n", i + 1);
                    printf("NRP: ");
                    scanf("%d", &mhs[i].NRP);
                    getchar(); //Menghapus buffer setiap ingin mengisi string
                    printf("Nama: ");
                    fgets(mhs[i].nama, sizeof(mhs[i].nama), stdin);
                    mhs[i].nama[strcspn(mhs[i].nama, "\n")] = '\0'; // Menghilangkan karakter \n
                    printf("Nilai Eval1 Eval2 Eval3 UAS: ");
                    scanf("%f %f %f %f", &mhs[i].eval1, &mhs[i].eval2, &mhs[i].eval3, &mhs[i].UAS);
                    getchar(); //Menghapus buffer setiap ingin mengisi string

                    i++;
                    printf("Mau menambahkan lagi? (y/t): ");
                    scanf(" %c", &lagi); //Menghapus buffer setiap ingin mengisi string
                    getchar();

                } while (lagi == 'y' || lagi == 'Y');
                break;

            case 2:
                mean(mhs, grade, i);
                MaksMin(mhs, grade, i);

                printf("\n%-10s %-20s %-6s %-6s %-6s %-6s %-6s %-6s %-6s\n", 
                       "NRP", "Nama", "Eval1", "Eval2", "Eval3", "UAS", "Mean", "Max", "Min");
                for (int j = 0; j < i; j++) {
                    printf("%-10d %-20s %-6.2f %-6.2f %-6.2f %-6.2f %-6.2f %-6.2f %-6.2f\n", 
                           mhs[j].NRP, mhs[j].nama, mhs[j].eval1, mhs[j].eval2, mhs[j].eval3, mhs[j].UAS, grade[j].rata, grade[j].maks, grade[j].min);
                }
                break;

            default:
                break;
        }
    } while (pilihan != 3);

    free(mhs); // Free the allocated memory
    free(grade); // Free the allocated memory

    return 0;
}

void mean(struct student *mhs, struct nilai *grade, int batas) {
    for (int i = 0; i < batas; i++) {
        float sum = mhs[i].eval1 + mhs[i].eval2 + mhs[i].eval3 + mhs[i].UAS;
        grade[i].rata = sum / 4;
    }
}

void MaksMin(struct student *mhs, struct nilai *grade, int batas) {
    for (int i = 0; i < batas; i++) {
        grade[i].maks = fmax(fmax(mhs[i].eval1, mhs[i].eval2), fmax(mhs[i].eval3, mhs[i].UAS));
        grade[i].min = fmin(fmin(mhs[i].eval1, mhs[i].eval2), fmin(mhs[i].eval3, mhs[i].UAS));
    }
}
