#include <stdio.h>

int main() {
    int a,b,c;
    float avg;
    scanf("%d %d %d",&a,&b,&c);
    float x=a+b+c;
    avg = (x)/3;
    printf("Average: %.2f", avg);
    return 0;
}