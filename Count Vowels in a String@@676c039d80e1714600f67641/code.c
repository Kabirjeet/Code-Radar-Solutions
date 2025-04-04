#include<stdio.h>
#include <string.h>

int vowels(char arr[])
{   
    int count= 0;
    for (int i= 0; arr[i]!= '\0'; i++)
    {
        if (strchr("AEIOUaeiou", arr[i])== 0)
        {
            count++;
        }
    }

    return count;
}

int main(void)
{
    char string[50];
    scanf("%s", string);

    printf("%i", vowels(string));
}