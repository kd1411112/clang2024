#include<stdio.h>
main()
{
	double a, b, * p_a, * p_b;
	printf("�����l�P�H");
	scanf("%lf", &a);
	printf("�����l�Q�H");
	scanf("%lf", &b);
	p_a = &a;
	p_b = &b;

	printf("�傫���ق�=");
	if (*p_a > *p_b) {
		printf("%f\n", *p_a);
	}
	else{
		printf("%f\n", *p_b);
	}
}