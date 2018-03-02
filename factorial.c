#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>

#define MAX_LINE 100

enum _bool
{
	false = 0,
	true = 1
};

typedef enum _bool Bool;

uint64_t readUserInput(void)
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
    uint64_t num;
    sscanf(s, "%d", &num);
	return num;
}
uint64_t calculateFactorial(unsigned long long x)
{
    uint64_t result = 1;
    for (uint64_t i = x; i > 1; --i)
        result *= i;
    return result;
}

int main(void)
{
    printf("Enter the number to calculate the factorial of: ");
    uint64_t x = readUserInput();
    uint64_t xFactorial = calculateFactorial(x);
    printf("%d! = %llu\n", x, xFactorial);
    return 0;
}
