#include<stdio.h>
main() {
	int a = 100, b = 200;
	int* p_a, * p_b;

	printf("a = %d\t b = %d\n", a, b);

	p_a = &b;
	p_b = &a;

	*p_a = *p_a + *p_b;
	*p_b = *p_a - *p_b;
	*p_a = *p_a - *p_b;

	printf("a = %d\t b = %d\n", a, b);

}