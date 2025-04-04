#include<stdio.h>
int main(){
    char st1[50];
    char st2[50];
    scanf("%s", st1);
    scanf("%s", st2);

    char st3[100];
    int i=0, j=0;
    
    while(st1[i] != '\0'){
        st3[j] = st1[i];
        i++;
    }

    j=0;
    
    while(st2[j] != '\0'){
        st3[i] = st2[j];
        i++;
        j++;
    }

    st3[i] = '\0';
    printf("%s", st3);
}