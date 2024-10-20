/*153 = (1*1*1)+(5*5*5)+(3*3*3)
where:
(1*1*1)=1
(5*5*5)=125
(3*3*3)=27
So:
1+125+27=153  */
#include <stdio.h>
int main()
{
    int num, r, sum = 0, temp;

    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        r = num % 10;
        sum += (r * r * r);
        num /= 10;
    }
    if (temp = sum)
    {
        printf("armstrong  number ");
    }
    else
        printf("not armstrong number");
}