#include <stdio.h>

int peak(int ar[], int sz) {
    if (sz == 1) return ar[0];  // Single element case

    for (int i = 1; i < sz - 1; i++) { // Ensure `i+1` is within bounds
        if (ar[i - 1] < ar[i] && ar[i] > ar[i + 1]) {
            return ar[i]; // Return first peak element found
        }
    }
    
    return -1; // If no peak is found
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", peak(arr, size));
    return 0;
}
