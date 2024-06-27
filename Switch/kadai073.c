#include<stdio.h>
main()
{
	int ia;
	char ope;

	printf("１０進数の整数？");
	scanf("%d", &ia);
	printf("アルファベット？(o or h or d)");
	scanf(" %c", &ope);

	switch (ope) {
	case 'o':
		printf("%o", ia);
		break;

	case 'h':
		printf("%x", ia);
		break;

	default:
		printf("%d", ia);
		break;

	}
}