#include<stdio.h>
main()
{
	double a, b, * p_a, * p_b;
	printf("ŽÀ”’l‚PH");
	scanf("%lf", &a);
	printf("ŽÀ”’l‚QH");
	scanf("%lf", &b);
	p_a = &a;
	p_b = &b;

	printf("‘å‚«‚¢‚Ù‚¤=");
	if (*p_a > *p_b) {
		printf("%f\n", *p_a);
	}
	else{
		printf("%f\n", *p_b);
	}
}