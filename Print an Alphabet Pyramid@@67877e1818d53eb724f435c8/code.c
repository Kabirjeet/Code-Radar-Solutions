#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        int al = 65;
        for(int j=0; j<=i; j++){
            printf("%c ",(int)al);
            al++;
        }
        printf("\n");
    }
    return 0;
}