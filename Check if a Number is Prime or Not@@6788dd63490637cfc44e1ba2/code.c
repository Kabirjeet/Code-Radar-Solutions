// Your code here...
#include<stdio.h>
int main(){
    int n, isprime=1;
    scanf("%d",&n);

    for(int i=2; i<= n/2; i++){
        if(n%i == 0){
            isprime = 0;
            break;
        }
    }

    if(isprime == 0){
        printf("Not Prime");
    } else{
        printf("Prime");
    }
    return 0;
}