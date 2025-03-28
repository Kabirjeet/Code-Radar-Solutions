#include<stdio.h>

int main() {
    int size, rot;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }  

    scanf("%d",&rot);
    // int rotarr[rot];
    // int rotindex = 0;

    // for(int i=(size-rot); i<size; i++){
    //     rotarr[rotindex] = arr[i];
    //     rotindex++;
    // }

    // for(int i=0; i<rot; i++){
    //     printf("%d ",rotarr[i]);
    // }
    
    // for(int i=0; i<(size-rot); i++){
    //     printf("%d ", arr[i]);
    // }

    rot = rot % size; // Handle cases where rot > size

    int rotArr[rot];

    // Store the last 'rot' elements
    for (int i = 0; i < rot; i++) {
        rotArr[i] = arr[size - rot + i];
    }

    // Shift remaining elements to the right
    for (int i = size - 1; i >= rot; i--) {
        arr[i] = arr[i - rot];
    }

    // Place rotated elements at the beginning
    for (int i = 0; i < rot; i++) {
        arr[i] = rotArr[i];
    }

    // Print the rotated array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
