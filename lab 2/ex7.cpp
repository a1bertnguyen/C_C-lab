#include <stdio.h>
int numbers, b, kt, i;
int main()
{
    printf("N= ");
    scanf("%d", &numbers);
        if (numbers>1){
        for (i = 2; i < numbers; i++) 
        {
            if (numbers % i == 0)
            {

                kt = 1;
            }
        }
        if (kt == 0)
        {
            printf("%d is prime number", i);
        }
        else{
             printf("%d is not prime number", i);
        }
        
        }
    

    return 0;
}