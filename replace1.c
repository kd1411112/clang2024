#include<stdio.h>
main()
{
	int a, b, i;
	
	a = 5;
	b = 3;
	printf("a b:%d %d\n", a, b);

	i = a;
	a = b;
	b = i;

	printf("a b:%d %d\n",a, b);
}