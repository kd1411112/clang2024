#include<stdio.h>
main()
{
	char c, * p_c;

	printf("１文字入力？");
	scanf("%c", &c);
	p_c = &c;
	printf("その次の文字は%c\n", *p_c+1);
}