#include <stdio.h>

main(){
    int n;
    printf("Masukkan ukuran baris bilangan : ");
    scanf("%d", &n);

    int arr[n];
    printf("Masukkan bilangan yang akan diurutkan : ");
    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }

    printf("Sebelum diurutkan\n");
    for (int i = 0; i < n;i++){
        printf("%d ", arr[i]);
    }

    int temp;
    for (int i = 0; i < n - 1;i++){
        for (int j = i + 1; j < n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSetelah diurutkan\n");
    for (int i = 0; i < n;i++){
        printf("%d ", arr[i]);
    }
}