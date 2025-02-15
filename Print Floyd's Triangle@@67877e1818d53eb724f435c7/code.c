#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int pr = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%d ",pr);
            pr++;
        }
        printf("\n");
    }
    return 0;
}