#include<stdio.h>

void printArray(int ar[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }
}

void bubbleSort(int ar[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(ar[j] > ar[i]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    printArray(ar, n);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}