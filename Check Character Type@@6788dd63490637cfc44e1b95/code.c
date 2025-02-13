#include<stdio.h>
int main()
{
    char ch;

    scanf("%c",&ch);

    ch = toupper(ch);

    switch (ch)
    {
    case 'A':
        printf("Vowel");
        break;
    case 'E' :
        printf("Vowel");
        break;
    case 'I' :
        printf("Vowel");
    case 'O' :
        printf("Vowel");
    case 'U' :
        printf("Vowel");
    default:
        printf("Consonant");
        break;
    }
    return 0;
}