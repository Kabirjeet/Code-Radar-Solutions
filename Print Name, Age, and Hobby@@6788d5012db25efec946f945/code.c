#include <stdio.h>

int main() {
    char name[20], hobby[20];
    int age;
    scanf("%19s %d", &name,&age);
    scanf("%19s", &hobby);

    printf("Name: %s", name);
    printf("Age: %d", age);
    printf("Hobby: %s", hobby);
    return 0;
}