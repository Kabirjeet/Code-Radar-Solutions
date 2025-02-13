#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
        printf("Vowel");
        break;
    case 'e' :
        printf("Vowel");
        break;
    case 'i' :
        printf("Vowel");
    case 'o' :
        printf("Vowel");
    case 'u' :
        printf("Vowel");
    default:
        printf("Consonant");
        break;
    }
    return 0;
}