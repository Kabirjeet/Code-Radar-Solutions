#include <stdio.h>

int main() {
    int a,b,c;
    float avg;
    scanf("%d %d %d",&a,&b,&c);
    int x=a+b+c;
    printf("%d",x);
    avg = (x)/3;
    printf("Average: %.2f", avg);
    return 0;
}