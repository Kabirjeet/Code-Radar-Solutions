#include<stdio.h>

void rep(char st[], char rep_with, char rep_what){
    int i=0;
    while(st[i] != '\0'){
        if(st[i] == rep_with){
            st[i] = rep_what;
        }
        i++;
    }

    i = 0;
    
    while(st[i] != '\0'){
        printf("%c",st[i]);
        i++;
    }
}
int main(){
    char st[100];
    char rep_with[1];
    char rep_what[1];

    scanf("%s", st);
    scanf("%c", rep_with);
    scanf("%c", rep_what);

    rep(st, rep_with, rep_what);
    return 0;
}