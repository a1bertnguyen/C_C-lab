#include <stdio.h>
#include <math.h>
double cal_sum(int n)
{
    if (n == 1)
    {
        return 1.0;
    }
    else
    {
        return 1.0 / (n * n) + cal_sum(n - 1);
    }
}
double cal_pi(int n)
{
    double sum = cal_sum(n);
    return sqrt(6 * sum);
}
int main()
{
    for (int n = 10000; n <= 20000; n += 1000)
    {
        double pi = cal_pi(n);
        printf("N = %d, Pi = %.6f\n", n, pi);
    }

    return 0;
}