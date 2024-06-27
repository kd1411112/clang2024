#include<stdio.h>
main()
{
	char left;
	char right;
	left = '5';
	right = '6';
		printf("%c Å~ %c = %d\n", left, right, (left - 0x30) * (right - 0x30));

}