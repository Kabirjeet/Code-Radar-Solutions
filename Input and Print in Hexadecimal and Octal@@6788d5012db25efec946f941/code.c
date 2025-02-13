#include<stdio.h>
#include<math.h>

int main() {
    int num, oct, i=0, n;
    scanf("%d",&num);
    printf("Hexadecimal: %X\n", num);
    
    while(num != 0){
        n = num % 8;
        oct += num * pow(10,i);
        num /= 8;
        i++;
    }
    printf("Octal: %d", oct)
    return 0;
}