#include <stdio.h>
int cal(int n)
{
    if (n == 1)
    {
        return 1 * 2;
    }
    else
    {
        return n * (n + 1) + cal(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter your number n: ");
    scanf("%d", &n);
    int result = cal(n);
    printf("%d", result);

    return 0;
}