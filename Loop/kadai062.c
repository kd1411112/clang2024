#include<stdio.h>
main()
{
	int ia, cnt;
	ia = 20;
	cnt = 0;
	do {
		do {
			printf("%2d ", ia);
			ia--;
		} while (ia % 10 != 0 && ia != 20);
		cnt++;
		printf("\n");
	} while (cnt < 2);
	
}