#include <stdio.h>

int main()
{
    int x, y;
    int x2, y2, xy, x2y2,xy2,x2y;
    int result;

    printf("X: ");
    scanf("%d", &x);
    printf("Y: ");
    scanf("%d", &y);
    
    x2 = x * x;
    y2 = y * y;
    xy = x * y;
    x2y2 = x2 * y2;
    xy2 = x * y2;
    x2y = x2 * y;
    result = 3 * x2y2 - 2 * xy2 - 7 * x2y - 4 * y2 + 15 * xy + 2 * x2 - 3 * x + 10 * y + 6; // only 16 operations
    printf("Ket qua: %d\n", result);

    return 0;
}
