#include <stdio.h>

int main()
{
	for (int i = 0; i < 100; i++){
	int div = 5;
		if (i % div == 0){
			printf("%d\n", i);
		}
	}
}
