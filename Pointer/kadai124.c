#include<stdio.h>
main()
{
	char c, * p_c;

	printf("‚P•¶š“ü—ÍH");
	scanf("%c", &c);
	p_c = &c;
	printf("‚»‚ÌŸ‚Ì•¶š‚Í%c\n", *p_c+1);
}