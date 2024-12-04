#include <stdio.h>

int main(){
  int n, OutBin;
  int i = 0;
  scanf("%d", &n);
  int outBinLs [10000] = {};

  while(n != 0){
    OutBin = n % 2;
    outBinLs[i] = OutBin;
    n = n /2;
    if(n == 0){
      break;
    }
    i++;

  }

  for(int j = i; j >= 0; j--){
    printf("%d ", outBinLs[j]);
  }

}
