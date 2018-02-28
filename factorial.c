#include <stdio.h>

unsigned long long int calculateFactorial(long long int x)
{
    unsigned long long int result = 1;
    for (unsigned long long int i = x; i > 1; --i)
    {
        result *= i;
    }
    return result;
}

int main(void)
{
    printf("Enter the number to calculate the factorial of: ");
    unsigned long long int x;
    scanf("%llu", &x);
    unsigned long long int xFactorial = calculateFactorial(x);
    printf("%d! = %llu\n", x, xFactorial);
    return 0;
}
