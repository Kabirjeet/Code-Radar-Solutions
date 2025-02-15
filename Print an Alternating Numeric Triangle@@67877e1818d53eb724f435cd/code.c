#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        int al = 1, cmp=1;
        for(int j=0; j<i+1; j++){
            if(al==1){
                cmp=0;
                al++;
            } else{
                cmp=1;
            }
            printf("%d ",cmp);
        }
        printf("\n");
    }   
    return 0;
}