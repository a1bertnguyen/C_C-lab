#include <stdio.h>
#include <math.h>

int main()
{
  double a, b, c, delta, Ans1, Ans2;
  scanf("%lf %lf %lf", &a, &b, &c);
  delta = pow(b, 2) - (4 * a * c);

  if (delta > 0)
  {
    Ans1 = (-b + sqrt(delta)) / (2 * a);
    Ans2 = (-b - sqrt(delta)) / (2 * a);
  }
  else if (delta == 0)
  {
    Ans1 = -b / 2 * a;
  }
  else
  {
    printf("no answer");
  }

  printf("%lf \n %lf", Ans1, Ans2);
}