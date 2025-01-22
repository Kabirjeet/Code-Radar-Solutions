#include <stdio.h>

char* welcome() {
    char inp;
    scanf("%c",&inp);
    return "You entered: %c",inp;
}

int main() {
    printf("%s", welcome());
    return 0;
}