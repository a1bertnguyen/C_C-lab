#include <stdio.h>

int main()
{
  int numb, max, digit;
  max = 0;
  scanf("%d", &numb);
  while (numb != 0)
  {
    digit = numb % 10;
    if (digit > max)
    {
      max = digit;
    }
    numb = numb / 10;
  }
  printf("%d", max);
  return 0;
}
