/* 1km = 15k
    2km =15k
    2.25km = ( 2.25 -2)*8000 +15 = 17k
    30km = (30 - 2)*8000 + 15000 = 239k
    31km = (31-30)*5000 + 224 = 244k
*/

#include <Stdio.h>
float distance;
float fare;

int main()
{
    scanf("%f", &distance);
    if (distance <= 2)
    {
        fare = 15000;
    }
    else if (distance <= 30)
    {
        fare = (distance - 2)*8000 + 15000;
    }
    if (distance > 30)
    {
        fare = ((distance - 30) * 5000) + (30 - 2)*8000 + 15000;
    }
    printf("%f", fare);
    return 0;
}