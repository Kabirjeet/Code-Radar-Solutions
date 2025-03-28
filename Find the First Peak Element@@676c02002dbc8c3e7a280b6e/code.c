#include <stdio.h>

int peak(int ar[], int sz) {
    if (sz == 1) return ar[0];

    if (ar[0] > ar[1]) return ar[0];

    for (int i = 1; i < sz - 1; i++) {
        if (ar[i - 1] < ar[i] && ar[i] > ar[i + 1]) {
            return ar[i];  
        }
    }

    if (ar[sz - 1] > ar[sz - 2]) return ar[sz - 1];

    return -1; 
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", peak(arr, size));
    return 0;
}
