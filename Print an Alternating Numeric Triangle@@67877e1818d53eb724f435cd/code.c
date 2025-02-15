#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        int a = 1;
        for(int j=0; j<i+1; j++){
            printf("%d ",a);
            if(a==1){
                a=0;
            } else{
                a=1;
            }
        }
        printf("\n");
    }   
    return 0;
}