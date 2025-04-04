#include<stdio.h>
#include<string.h>
int main(){
    char st1[50];
    char st2[50];
    fgets(st1, sizeof(st1), stdin);
    fgets(st2, sizeof(st2), stdin);
    
    st1[strcspn(st1,"\n")] = 0;
    st2[strcspn(st2,"\n")] = 0;

    char st3[100];
    int i=0, j=0;
    
    while(st1[i] != '\0'){
        st3[i] = st1[i];
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