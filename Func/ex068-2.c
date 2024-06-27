#include<stdio.h>
main()
{
	int str[256];

	while (gets(str) != NULL) {
		puts(str);
	}
}