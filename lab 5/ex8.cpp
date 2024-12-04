#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    int digits[10];
    int index = 0;
    while (number > 0)
    {
        digits[index++] = number % 10;
        number /= 10;
    }

    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d ", digits[i]);
    }

    printf("\n");
    return 0;
}
