#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    int temp;
    scanf("%s",&arr);
    int length = strlen(arr);
    
    for (int t= 0; t < length -1; t++)
    {
        for (int z = t + 1; z < length; z++)
        {
            if (arr[t] < arr[z])
            {
                temp = arr[t];
                arr[t] = arr[z];
                arr[z] = temp;
            }
        }
    }
     for (int i = 0; i < length; i++)
    {
        printf(" %c", arr[i]);
    }

    return 0;
}