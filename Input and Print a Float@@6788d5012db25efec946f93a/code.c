#include <stdio.h>

char* welcome() {
    float inp;
    scanf("%f",&inp);
    char output = "You entered: %f", inp;
    return ((char)output);
}

int main() {
    printf("%s", welcome());
    return 0;
}