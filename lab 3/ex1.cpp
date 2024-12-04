#include <stdio.h>
int main()
{
    int n;
    double square, cube;

    printf("N= ");
    scanf("%d", &n);
    printf("Number\t Square\t Cube\t");
    for (int i = 0; i < n; i++)
    {

        square = i * i;
        cube = i * i * i;

        printf("\n%d\t %0.f\t %0.f\n", i, square, cube);
    }

    return 0;
}