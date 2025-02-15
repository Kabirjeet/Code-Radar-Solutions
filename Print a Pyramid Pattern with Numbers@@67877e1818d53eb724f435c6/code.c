#include<stdio.h>
#include<math.h>

int factorial(int a){
    int fac=1;
    for(int i=a; i>0; i++){
        fact *= i;
    }
    return fac;
}
int main(){
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%");
        }
    }
    return 0;
}