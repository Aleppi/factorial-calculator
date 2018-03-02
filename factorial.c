#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "gmp.h"

#define MAX_LINE 100

enum _bool
{
	false = 0,
	true = 1
};

typedef enum _bool Bool;

int readUserInput(void)
{
	
	char s[MAX_LINE];
	Bool valid = false;
	while (!valid)
	{
		fgets(s, sizeof(s), stdin);
		int len = strlen(s);
		while (len > 0 && isspace(s[len - 1]))
			--len;
		if (len > 0)
		{
			valid = true;
			for (int i = 0; i < len; ++i)
			{
				if (!isdigit(s[i]))
				{
					valid = false;
					break;
				}
			}
		}
		if (!valid)
			printf("Enter an integer: ");
	}
    int num;
    sscanf(s, "%d", &num);
	return num;
}
void calculateFactorial(mpz_t result, int x)
{
    mpz_init(result);
    mpz_set_ui(result, 1);
    for (unsigned long i = x; i > 1; --i)
        mpz_mul_ui(result, result, i);
}

int main(void)
{
    printf("Enter the number to calculate the factorial of: ");
    int x = readUserInput();
    mpz_t xFactorial;
    mpz_init(xFactorial);
    calculateFactorial(xFactorial, x);
    gmp_printf("%d! = %Zd\n", x, xFactorial);
    return 0;
}
