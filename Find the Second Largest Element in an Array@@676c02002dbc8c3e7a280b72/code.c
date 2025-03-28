#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int largest = arr[size - 1]; 
    int second_largest = -1;

    for (int i = size - 2; i >= 0; i--) { 
        if (arr[i] < largest) { 
            second_largest = arr[i];
            break;
        }
    }

    printf("%d\n", second_largest);
    return 0;
}
