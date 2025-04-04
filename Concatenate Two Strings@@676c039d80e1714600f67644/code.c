#include<stdio.h>
int main(){
    char st1[20];
    char st2[20];
    scanf("%s", st1);
    scanf("%s", st2);

    char st3 = st1+st2;
    printf("%s", st3);
}