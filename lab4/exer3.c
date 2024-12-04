#include <stdio.h>

int main()
{
  int numb1, numb2;
  scanf("%d %d", &numb1, &numb2);
  for (int i = numb1; i <= numb2; i++)
  {
    int is_prime = 1;
    for (int j = 2; j <= i / 2; j++)
      if (i % j == 0)
      {
        is_prime = 0;
        break;
      }
    if (is_prime == 1)
    {
      printf("%d", i);
    }
  }
}
