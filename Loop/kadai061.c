#include<stdio.h>
main()
{
	int ia, cnt;
	ia = 1;
	cnt = 0;
	do {
		do {
			printf("%2d ", ia);
			ia++;
		} while (ia % 10 != 1 && ia != 1);
		cnt++;
		printf("\n");
	} while (cnt < 2);
	
}