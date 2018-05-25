#include <stdio.h>

int main()
{
	char a = a;
	int b = 1;
	float c = 1.1;
	double d = 1.11;

	short int e = 2;
	long int f = 3;

	printf("A char variable has a size of %d bytes\n", sizeof(a));
	printf("An int variable has a size of %d bytes\n", sizeof(b));
	printf("A float variable has a size of %d bytes\n", sizeof(c));
	printf("A double variable has a size of %d bytes\n", sizeof(d));
	printf("A short int variable has a size of %d bytes\n", sizeof(e));
	printf("A long int variable has a size of %d bytes\n", sizeof(f));
} 

