#include <stdio.h>

//Mencari maksimal dan minimal dari array
void findMaxMin(int arr[], int n, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

//Mencari jumlah dari array
int findSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

//Mencari rata-rata dari array
float findMean(int arr[], int n) {
    int sum = findSum(arr, n);
    return (float)sum / n;
}

//Mencari nilai pada index tertentu
int getValueAtIndex(int arr[], int index, int n) {
    if (index >= 0 && index < n) {
        return arr[index];
    } else {
        return -1;  // Return -1 if the index is out of bounds
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int index;
    printf("Enter the index you want to check: ");
    scanf("%d", &index);

    int max, min;
    float mean;
    int value;

    findMaxMin(arr, n, &max, &min);
    mean = findMean(arr, n);
    value = getValueAtIndex(arr, index, n);

    printf("Maximum value is %d\n", max);
    printf("Minimum value is %d\n", min);
    printf("Sum of all values is %d\n", findSum(arr, n));
    printf("Mean of all values is %.2f\n", mean);

    if (value != -1) {
        printf("Value at index %d is %d\n", index, value);
    } else {
        printf("Index %d is out of bounds\n", index);
    }

    return 0;
}
