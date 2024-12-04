#include <stdio.h>
#include <math.h>

int main(){
  int n;
  scanf("%d", &n);
  while(n % 2 == 0){

    printf("%d x ", 2);
    n = n/2;
  }
  for(int i = 3; i <= sqrt(n); i++){
    while(n % i == 0){

    printf("%d x ", i);
      n = n/i;
    }
  }
  if (n > 2){

    printf("%d x ", n);
  }
}
