#include<stdio.h>
#include<math.h>

int main() {
    int num, oct=0, i=0, n;
    scanf("%d",&num);
    printf("Hexadecimal: %X\n", num);
    
    while(num != 0){
        n = num % 8;
        oct += n * (int)pow(10,i);
        num /= 8;
        i++;
    }
    printf("Octal: %d", oct);
    return 0;
}