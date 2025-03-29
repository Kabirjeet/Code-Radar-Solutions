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

    int min=1, min1=0, min2=0;
    for(int i=0; i<size; i++){
        int sub = arr[i];

        for(int j=0; j<size; j++){
            if(i==j){
                continue;
            } else{
                if((arr[j] - arr[i]) <= min){
                    min = arr[j] - arr[i];
                    min1 = arr[i];
                    min2 = arr[j];
                }
            }
        }
    }

    printf("%d %d", min1, min2);

    return 0;
}


