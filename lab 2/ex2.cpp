#include <stdio.h>
int factorial(int n)
{
    int F = 1;
    if (n % 2 == 0)
    {
        for (int i = 2; i <= n; i += 2)
        {
            F *= i;
        }
    }
    else
    {
        for (int i = 1; i <= n; i += 2)
        {
            F *= i;
        }
    }
    return F;
}

int main()
{
    int numbers;
    scanf("%d", &numbers);
    int result = factorial(numbers);
    printf(" %d\n", result);
    return 0;
}