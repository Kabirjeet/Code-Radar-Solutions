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
    for(int i=(size-rot)-1; i<size; i++){
        rotarr[rotindex] = arr[i];
        rotindex++;
    }

    for(int i=0; i<rot; i++){
        printf("%d ",rot[i]);
    }
    return 0;
}
