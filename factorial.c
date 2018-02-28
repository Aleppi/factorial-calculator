#include <stdio.h>
#include <string.h>

enum _bool
{
	false = 0,
	true = 1
};

typedef enum _bool Bool;

unsigned long long readUserInput(void)
{
	unsigned long long num;
	scanf("%llu", &num);
	char s[MAX_LINE];
	Bool valid = false;
	fgets(s, sizeof(s), stdin);
	int len = strlen(s);
	while (len > 0 && isspace(s[len - 1]))
	{
		if (len > 0)
		{
			valid = true;
			for (i = 0; i < len; ++i)
			{
				if (!isdigit([i]))
				{
					valid = false;
					break;
				}
			}
		}
	}
	if (valid == false)
		printf("Please enter an integer.\n");
	sscanf(s, "%d", num);
	return num;
}
unsigned long long calculateFactorial(unsigned long long x)
{
    unsigned long long result = 1;
    for (unsigned long long i = x; i > 1; --i)
    {
        result *= i;
    }
    return result;
}

int main(void)
{
    printf("Enter the number to calculate the factorial of: ");
    unsigned long long x = readUserInput();
    unsigned long long xFactorial = calculateFactorial(x);
    printf("%d! = %llu\n", x, xFactorial);
    return 0;
}
