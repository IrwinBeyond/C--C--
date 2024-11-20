#include <stdio.h>
#include <string.h>

// Define the struct
struct Mahasiswa {
    char nama[50];
    long long NRP;
    int UTS;
    int UAS;
};

// Function to swap two structures
void swap(struct Mahasiswa* a, struct Mahasiswa* b) {
    struct Mahasiswa temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble sort function
void bubbleSort(struct Mahasiswa arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j].NRP > arr[j+1].NRP) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

// Selection sort function
void selectionSort(struct Mahasiswa arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j].NRP < arr[min_idx].NRP) {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

// Insertion sort function
void insertionSort(struct Mahasiswa arr[], int n) {
    int i, j;
    struct Mahasiswa key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j].NRP > key.NRP) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n, i, choice, continue_choice;

    // Ask the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Mahasiswa students[n]; // Array of structures

    // Loop to input data for each student
    for (i = 0; i < n; i++) {
        printf("Enter details for student %d\n", i+1);

        printf("Name: ");
        scanf(" %[^\n]%*c", students[i].nama); // Note the space before % to skip leading whitespace

        printf("NRP: ");
        scanf("%lld", &students[i].NRP);

        printf("UTS: ");
        scanf("%d", &students[i].UTS);

        printf("UAS: ");
        scanf("%d", &students[i].UAS);
    }

    do {
        // Ask the user for sorting method
        printf("Choose sorting method:\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n");
        scanf("%d", &choice);

        // Sort the students based on the user's choice
        switch (choice) {
            case 1:
                bubbleSort(students, n);
                break;
            case 2:
                selectionSort(students, n);
                break;
            case 3:
                insertionSort(students, n);
                break;
            default:
                printf("Invalid choice. Exiting program.");
                return 1;
        }

        // Display the sorted data
        printf("\nSorted list of students by NRP:\n");
        for (i = 0; i < n; i++) {
            printf("Name: %s\n", students[i].nama);
            printf("NRP: %lld\n", students[i].NRP);
            printf("UTS: %d\n", students[i].UTS);
            printf("UAS: %d\n", students[i].UAS);
        }

        // Ask if the user wants to sort again or exit
        printf("\nDo you want to sort again with a different method or exit?\n1. Sort again\n2. Exit\n");
        scanf("%d", &continue_choice);

    } while (continue_choice == 1);

    return 0;
}
