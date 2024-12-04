#include <Stdio.h>
int main()
{
    int num;
    int count = 0;
    scanf("%d", &num);
    while (num % 10 > 0)
    {
        num /= 10;
        count++;
    }
    printf("Number has %d Digits", count);

    return 0;
}