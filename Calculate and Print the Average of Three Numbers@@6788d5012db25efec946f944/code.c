#include <stdio.h>

int main() {
    int a,b,c;
    float avg;
    scanf("%d %d %d",&a,&b,&c);
    avg = (a+b+c)*1000/3*1000;
    printf("Average: %.2f", avg);
    return 0;
}