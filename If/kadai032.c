#include<stdio.h>
main()
{
	int ai;
	printf("整数？");
	scanf("%d", &ai);
	if (ai % 2 == 0) {
		printf("その数は「偶数」です\n");
	}
	else {
		printf("その数は「奇数」です\n");
	}
}