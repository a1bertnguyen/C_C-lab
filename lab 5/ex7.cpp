#include<stdio.h>
int gcd(int a, int b) {
    while (b != 0) {           // Euclid theorem 
        int temp = b;           
        b = a % b;              
        a = temp;              
    }
    return a;                   
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main()
{
    int a = 56, b = 98;
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    printf("\nLCM of %d and %d is %d ", a, b, lcm(a, b));
    return 0;
}