#include <stdio.h>
int numbers, b, kt, i;
int main()
{
    printf("N= ");
    scanf("%d", &numbers);
    for (b = 2; b <= numbers; b++) // condtion 1 : numbers > 1
    {
        kt = 0;
        for (i = 2; i < b; i++) // condition 2 : cant divide any number except that numbers
        {
            if (b % i == 0)
            {

                kt = 1;
            }
        }
        if (kt == 0)
        {
            printf(" %d", b);
        }
    }

    return 0;
}