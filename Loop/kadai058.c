#include<stdio.h>
main()
{
	int num;
	char moji;
	for (num = 32; num <= 126; num++) {
		moji = num;
		printf("%x %c ", num ,moji);
		if (num % 16 == 0&&num!=32) {
			printf("\n");

		}
	}
}