#include<stdio.h>
int main(){
    char st1[50];
    char st2[50];
    scanf("%s", st1);
    scanf("%s", st2);

    char st3[100];
    int st3index = 0;
    for(int i=0; st1[i] != '\0'; i++){
        st3[st3index] = st1[i];
        st3index++;
    }

    for(int j=0; st2[i] != '\0'; j++){
        st3[st3index] = st2[j];
    }
    printf("%s", st3);
}