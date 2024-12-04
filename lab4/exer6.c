#include <stdio.h>

int main(){
  int n;
  int n1 = 0;
  int n2 = 1;
  int nextN = n1 + n2;

  scanf("%d", &n);
  
  printf("%d %d ", n1, n2);
  while(nextN <=n){
    printf("%d ", nextN);
    n1 = n2;
    n2 = nextN;
    nextN= n1 + n2;
  }


  return 0;
}
