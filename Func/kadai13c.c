#include<stdio.h>
int NUM (int *n1, int *n2);

main()
{
	int a, b;
	a = 10;
	b = 20;
	printf("関数実行前の値\n");
	printf("a = %d\tb = %d\n", a, b);

	NUM(&a, &b);

	printf("関数実行後の値\n");
	printf("a = %d\tb = %d\n", a, b);
}

int NUM(int *n1, int *n2) {
	*n1 = *n1 + *n2;
	*n2 = *n1 - *n2;
	*n1 = *n1 - *n2;
	return;
}