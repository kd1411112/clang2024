#include<stdio.h>
main()
{
	int ia, sum;
	
	ia = 1;
	sum = 0;
	do {
		sum += ia;
		printf("%d+", ia);
		ia++;
	} while (sum <= 300);
	printf("\b=%d", sum);
}