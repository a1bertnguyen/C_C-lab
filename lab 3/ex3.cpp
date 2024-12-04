#include <stdio.h>

int main()
{
    char operato;
    int num1, num2, result;
    
    printf("Enter calculation (e.g., 4+5): ");
    scanf("%d %c %d", &num1, &operato, &num2);

    switch (operato)
    {
    case '+':
        result = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("%d / %d = %d\n", num1, num2, result);
        }
        else
        {
            printf("Error: Division by zero is undefined.\n");
        }
        break;
    default:
        printf("Error: Invalid operator.\n");
        break;
    }

    return 0;
}
