#include <stdio.h>

char* welcome() {
    float inp;
    scanf("%f",&inp);

    // char* output = malloc(50);

    // if(output != null){
    //     sprintf(output,"You entered: %f", inp);
    // }
    return ("You entered: %f",inp);
}

int main() {
    printf("%s", welcome());
    return 0;
}