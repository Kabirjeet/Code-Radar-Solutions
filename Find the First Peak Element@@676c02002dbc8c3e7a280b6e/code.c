#include<stdio.h>

int peak(int ar[], int sz){
    for(int i=1; i<sz; i++){
        if((ar[i-1] < ar[i]) && (ar[i] > ar[i+1])){
            return ar[i];
        }
    }
}

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("%d",peak(arr, size));
    return 0;
}