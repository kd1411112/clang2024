#include<stdio.h>
main()
{
	char c, * p_c;

	printf("�P�������́H");
	scanf("%c", &c);
	p_c = &c;
	printf("���̎��̕�����%c\n", *p_c+1);
}