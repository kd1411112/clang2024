#include<stdio.h>
main()
{
	int su;
	printf("��������");
	scanf("%d", &su);
	while (su) {		//-�ł����o�O��
		printf("*");
		su--;
	}
}