#include<stdio.h>
main()
{
	int ia;
	char ope;

	printf("�P�O�i���̐����H");
	scanf("%d", &ia);
	printf("�A���t�@�x�b�g�H(o or h or d)");
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