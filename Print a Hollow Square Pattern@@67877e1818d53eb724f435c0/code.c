#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if((i==0 && j==0) || (i==n-1 && j==n-1)){
                for(int i=0; i<n; i++){
                    printf("*");
                }
            } else if((j==0 && j==n)){
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }   
    return 0;
}