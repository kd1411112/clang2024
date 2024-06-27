#include<stdio.h>
main()
{
	int ia, cnt1, cnt2;
	ia = 20;
	cnt1 = 0;
	cnt2 = 0;

	while (cnt1 < 2) {
		while (cnt2<10) {
			cnt2++;
			printf("%2d ", ia);
			ia--;
		}
		printf("\n");
		cnt1++;
		cnt2 = 0;
	}
	
}