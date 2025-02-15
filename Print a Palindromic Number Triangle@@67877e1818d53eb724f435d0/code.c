#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            printf(" ");
        }
        for(int k=0; k<=2*i; k++){
            if(k==2*i){
                printf("%d",1);
            } else{
                printf("%d",k+1);
            }
        }
        printf("\n");
    }   
    return 0;
}