#include <stdio.h>
#include <ctype.h>
void check(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("'%c' is a vowel.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is a consonant.\n", ch);
    }
    else
    {
        printf("%c is not an alphabet character.\n", ch);
    }
}

int main()
{
    char ch;
    scanf("%c", &ch);
    check(ch);
    return 0;
}