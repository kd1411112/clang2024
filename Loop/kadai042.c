#include<stdio.h>
main()
{
	int  i,A;
	i = 1;
	A = 0;
		while (A <= 300) {
			printf("%d+", i);
			A += i;
			i++;
		}
		printf("\b=%d", A);
}