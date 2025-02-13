#include <stdio.h>

int main() {
    int num, oct = 0, i = 1, n;

    scanf("%d", &num);
    printf("Hexadecimal: %X", num);
    
    while (num != 0) {
        n = num % 8;
        oct += n * i;  
        num /= 8;
        i *= 10;  
    }

    printf("Octal: %d", oct);
    return 0;
}
