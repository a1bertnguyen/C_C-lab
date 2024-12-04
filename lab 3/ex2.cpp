#include <stdio.h>

int main()
{
    int t1, t2, t5, t10;
    int count = 0;
    for (t10 = 0; t10 < 3; t10++)
    {
        for (t5 = 0; t5 < 6; t5++)
        {
            for (t2 = 0; t2 < 15; t2++)
            {
                for (t1 = 0; t1 < 30; t1++)
                {

                    if (10 * t10 + 5 * t5 + 2 * t2 + t1 == 30)
                    {
                        count++;
                    printf("\n 3000d = ");
                    if (t10){
                        printf(" %d 10,000 VND ",t10);
                    }
                    if(t5){
                        printf("%d 5,000 VND ",t5);
                    }
                    if (t2)
                    {
                         printf("%d 2,000 VND ",t2);
                    }
                    if (t1)
                    {
                         printf("%d 1,000 VND ",t1);
                    }
                    printf("\n");
                    }
                }
            }
        }
    }
    printf("have %d case to have 30,000 VND", count);
    return 0;
}