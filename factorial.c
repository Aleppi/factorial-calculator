#include <stdio.h>

int calculateFactorial(int x)
{
    int result = 1;
    for (int i = x; i > 1; --i)
    {
        result *= i;
    }
    return result;
}

int main(void)
{
    printf("Enter the number to calculate the factorial of: ");
    int x;
    scanf("%i", &x);
    int xFactorial = calculateFactorial(x);
    printf("%d! = %d\n", x, xFactorial);
    return 0;
}
