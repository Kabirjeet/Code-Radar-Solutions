#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int arr[N];

    if (N <= 0) {
        return 0;
    }

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < N; i++) {
        printf("%d ");
    }
    return 0;
}
