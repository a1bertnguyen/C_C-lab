#include <stdio.h>
int numbers;
int min = 0, max = 0;

int main()
{
    while (1)
    {
        scanf("%d", &numbers);
        if (numbers == 0)
        {
            break;
        }

        if (min == 0 || numbers < min)
        {
            min = numbers;
        }
        if (max == 0 || numbers > max)
        {
            max = numbers;
        }
    }
    if (max != 0 && min != 0)
    {
        printf("Max: %d", max);
        printf("\nMin: %d", min);
    }
    else
    {
        printf("please give the numbers differt from 0 ");
    }

    return 0;
}