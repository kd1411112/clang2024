#include<stdio.h>
main()
{
	int num, sum;
	sum = 0;
	while (1) {
		printf("数を入れて : ");
		scanf("%d", &num);
		if (num == -999) {
			printf("結果発表!\n");
			break;
		}
		sum += num;
	}
	printf("合計= %d\n", sum);
}