#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        int al = 1;
        for(int j=0; j<i+1; j++){
            printf("%d ",al);
            al++;
            if(al==1){
                al=0;
            } else{
                a=1;
            }
        }
        printf("\n");
    }   
    return 0;
}