#include<stdio.h>

void selectionSort(int ar[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(ar[j] < ar[i]){
                int temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
        }
    }
}

void printArray(int ar[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", ar[i]);
    }
}