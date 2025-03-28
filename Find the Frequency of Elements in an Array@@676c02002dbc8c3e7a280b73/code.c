#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size], visited[size];
    
    // Read input and initialize `visited` array
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;  // Mark all elements as uncounted
    }

    for (int i = 0; i < size; i++) {
        if (visited[i] == 1) continue;  // Skip already counted elements

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark duplicate elements as counted
            }
        }
        printf("%d %d\n", arr[i], count);
    }

    return 0;
}
