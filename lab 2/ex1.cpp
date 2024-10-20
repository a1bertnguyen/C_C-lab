#include <stdio.h>
int main()
{
int arr[100];
int num;
int count = 0;
int max, min;
    while (1)
    {
        scanf("%d",&num);
        if (num == 0)
        {
            break;
        }
        arr[count] = num;
        count++;
    }
    min = max = arr[0];
    for (int i = 1; i < count; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
         if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d", min);

    return 0;
}