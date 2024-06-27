#include<stdio.h>
main()
{
	int a, b;
	a = 9;
	b = 0;

	printf("a b:%d %d\n", a, b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("a b:%d %d\n",a, b);
}