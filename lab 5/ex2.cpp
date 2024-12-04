#include<stdio.h>
#include<math.h>

int cal (int x,int n){
if (n==1){
    return x;
}
else{


return pow(x,n) +cal(x,n-1);

}

}
int main() {
    int x, n;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int result = cal(x, n);
    printf("%d\n", result);

    return 0;
}