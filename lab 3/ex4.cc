#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("Perpect Number");
    }
    else
    {
        printf("Not Perpect Number");
        Perpectnumber(num);
    }
    return 0;
}

