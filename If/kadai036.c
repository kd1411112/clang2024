#include<stdio.h>
main()
{
	int ia, ib;
	printf("整数１？");
	scanf("%d", &ia);
	printf("整数２？");
	scanf("%d", &ib);

	if (ia < ib) {
		printf("%d のほうが %d より %d 大きい", ib, ia, ib - ia);
	}
	else if (ia > ib) {
		printf("%d のほうが %d より %d 大きい", ia, ib, ia - ib);
	}
	else {
		printf("%d と %d は等しい", ia, ib);
	}
}