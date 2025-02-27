#include <stdio.h>

int printArray(int ar[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }
}

int bubbleSort(int ar[], int n){
    printf("1");
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);

    bubblesort(arr, n);
    printArray(arr, n);
    return 0;
    }
}