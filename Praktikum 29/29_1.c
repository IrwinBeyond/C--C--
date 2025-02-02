#include <stdio.h>
#include <string.h>
#define MAKS 20

struct date {
    int day;
    int month;
    int year;
};

struct student {
    char name[50];
    struct date birthday;
};

int main() {
    struct student data_mhs[MAKS];
    int i = 0, jml;
    char lagi;
    do {
        printf("Name : ");
        fgets(data_mhs[i].name, sizeof(data_mhs[i].name), stdin);
        data_mhs[i].name[strcspn(data_mhs[i].name, "\n")] = '\0'; // Menghilangkan karakter \n

        printf("Birthday (mm-dd-yyyy): ");
        scanf("%d-%d-%d", &data_mhs[i].birthday.month, &data_mhs[i].birthday.day, &data_mhs[i].birthday.year);
        i++;

        fflush(stdin); // Menghapus sisa data dalam buffer keyboard
        printf("\nMau memasukkan data lagi [Y/T] ? ");
        lagi = getchar(); // Membaca tombol
        fflush(stdin); // Menghapus sisa data dalam buffer keyboard
    } while (lagi == 'Y' || lagi == 'y');
    
    jml = i;
    printf("\nDATA MAHASISWA\n");
    for (i = 0; i < jml; i++) {
        printf("%d. Name : %s\n", i + 1, data_mhs[i].name);
        printf("\nBirthday : %d-%d-%d\n\n", data_mhs[i].birthday.month, data_mhs[i].birthday.day, data_mhs[i].birthday.year);
    }
    return 0;
}
