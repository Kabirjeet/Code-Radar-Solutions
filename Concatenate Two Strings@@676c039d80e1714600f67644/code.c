#include<Stdio.h>
int main(){
    char st1[];
    char st2[];
    scanf("%s", st1);
    scanf("%s", st2);

    char st3 = st1+st2;
    printf("%s", st3);
}