#include <stdio.h>

char* welcome() {
    float inp;
    scanf("%f",&inp);
    return ("You entered: %f",inp);
}

int main() {
    printf("%s", welcome());
    return 0;
}