#include <stdio.h>
int inverse(int n)
{
    while (n > 0)
    {
        printf("%d", n % 10);
        n /= 10;
    }

    return 0;
}
int main()
{
    int number;
    scanf("%d", &number); 
    inverse(number);
    return 0;
}