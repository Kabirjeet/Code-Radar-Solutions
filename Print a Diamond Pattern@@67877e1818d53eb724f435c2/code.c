#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            printf(" ");
        }
        for(int k=0; k<=2*i; k++){
            printf("*");
        }
        printf("\n");
    } 
    
    for(int i=n-1; i>0;i--){
        for(int j=n; j>i; j--){
            printf("|");
        }
    }
    return 0;
}