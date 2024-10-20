#include <stdio.h>
int number;

int main()
{
    scanf("%d", &number); // 123456

    while (number > 0) // loop to find the last answeers
    // 1
    {
        printf(" %d", number % 10); // find the digit number 1/10 = 0 du 1
        number /= 10; // delete the digit number 
    }
    return 0;
}