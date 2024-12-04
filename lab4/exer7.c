#include <stdio.h>
#include <math.h>


int main(){
  int x,n;
  scanf("%d %d", &x, &n);

  double Ans= x;  
 
  for(int i = 0; i < n;){
    Ans =sqrt(Ans) + x;
    i +=1;
    if(i == n -1){
      Ans = sqrt(Ans);
      break;
    }
  }
  
  printf("%f", Ans);
}
