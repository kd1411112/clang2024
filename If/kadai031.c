#include<stdio.h>
main()
{
	float ia, ib;
	printf("�Q�̎����l");
	scanf("%f%f", &ia, &ib);
	if (ia < ib) {
		printf("�傫���ق��� = %f", ib);
	}
	else {
		printf("�傫���ق��� = %f", ia);
	}
}