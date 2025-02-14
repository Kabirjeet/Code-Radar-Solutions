#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=n; i>0; i--){
        for(int j=0; j<i+2; j++){
            printf("* ");
        }
        printf("\n");
    }   
    return 0;
}