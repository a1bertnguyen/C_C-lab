#include <Stdio.h>
#include <stdbool.h>
bool Is_Prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (Is_Prime(i))
        {
            printf("%d", i);
        }
    }

    return 0;
}