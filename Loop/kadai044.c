#include<stdio.h>
main()
{
	int ia;
	printf("�����i-999�œ��͏I���j�H");
	scanf("%d", &ia);
	while (ia != -999) {
		printf("�W�i�� = %o\t�P�U�i�� = %x\n", ia, ia);
		printf("�����i-999�œ��͏I���j�H");
		scanf("%d", &ia);
	}
}