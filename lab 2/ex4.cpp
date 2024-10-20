#include <stdio.h>
int main()
{
    char arr[7][10] = {"Monday", "Tuesday","Wednesday","Thurday","Friday","Saturday","Sunday"};

    int num;

    scanf("%d",&num);
    if (num > 1 && num < 8)
    {
        printf("%d -> %s\n", num, arr[num-2]);
    }
    else 
    {
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
    return 0;
}