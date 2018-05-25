#include <stdio.h>

int main()
{
	int a = 0;

	if (a == 0)
	{
		printf("a is equal to 0\n");
	}
	else
	{
		printf("a is not equal to 0\n");
	}

	int b = 1;

	if (a != b)
	{
		printf("a is not equal to b\n");
	}

	if (b > a)
	{
		printf("b is greater than a\n");
	}

	int c = 1;

	if (b >= c)
	{
		printf("b is greater than or equal to c\n");
	}

	if (b == 1 && c == 1)
	{
		printf("b and c are both equal to 1\n");
	}

	if (a == 1 || b == 1)
	{
		printf("either a or b is equal to 1\n");
	}

	if (!(a == 1))
	{
		printf("a is not equal to 1\n");
	}
}
