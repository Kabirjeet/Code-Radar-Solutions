#include<stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    if(size == 1){
        printf("-1");
        return 0;
    }
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // for(int i=0; i<size; i++){
    //     printf("%d ",arr[i]);
    // }

    int min = arr[1] - arr[0];
    int min1 = arr[0], min2 = arr[1];
    for(int i=1; i<size-1; i++){
        int diff = arr[i+1] - arr[i];
        if(diff < min){
            min = diff;
            min1 = arr[i];
            min2 = arr[i+1];
        }
    }

    printf("%d %d", min1, min2);

    return 0;
}


