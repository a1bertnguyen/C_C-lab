#include <Stdio.h>
int main()
{
    int num1, num2;
    int GDC = 1;
    scanf("%d %d", &num1, &num2);
    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            GDC = i;
        }
    }
    printf("%d", GDC);
    return 0;
}