#include <stdio.h>

//parameter *arr menggunakan *(arr+i) untuk membaca value suatu index array
//parameter arr[] menggunakan 
int findidx(int *arr, int idx, int n){
    for (int i = 0; i < n;i++){
        if (*(arr+i)==idx){ 
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;

    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("%d.", i + 1);
        scanf("%d", &arr[i]);
    }

    int idx;
    printf("index = ");
    scanf("%d", &idx);

    if(findidx(arr, idx, n)){
        printf("%d = ada", idx);
    }
    else{
        printf("%d = tidak ada", idx);
    }
}