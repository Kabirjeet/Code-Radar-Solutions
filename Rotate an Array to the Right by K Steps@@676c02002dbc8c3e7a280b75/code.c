#include<stdio.h>

int main() {
    int size, rot;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }  

    scanf("%d",&rot);
    int rotarr[rot];
    int rotindex = 0;

    for(int i=(size-rot); i<size; i++){
        rotarr[rotindex] = arr[i];
        rotindex++;
    }

    for(int i=0; i<rot; i++){
        printf("%d ",rotarr[i]);
    }
    
    for(int i=0; i<(size-rot); i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
