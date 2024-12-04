#include <stdio.h>
#include <string.h>

int main()
{
  char champernowne[10000] = "";
  char buffer[120];

  int n, k; // n <= 1000
  scanf("%d", &n);
  scanf("%d", &k);

  for (int i = 1; i <= n; i++)
  {
    sprintf(buffer, "%d", i);
    strcat(champernowne, buffer);
  }

  printf("%c", champernowne[k - 1]);

  return 0;
}