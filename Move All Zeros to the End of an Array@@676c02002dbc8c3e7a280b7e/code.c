#include<stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] == 0){
                int temp = arr[i];
                arr[j] = arr[i];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}


