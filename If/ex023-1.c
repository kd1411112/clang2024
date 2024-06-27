#include<stdio.h>
main()
{
	int sc, h=0, m=0, s=0;
	printf("秒数を入力 : ");
	scanf("%d", &sc);
	if (sc < 0) {
		printf("エラーです。");
	}
	else {
		if (sc > 5000) {
			printf("エラーです。");
		}
		else {
			int h = sc / 3600;
			int	m = sc % 3600 / 60;
			int s = sc % 3600 % 60;
			printf("%d時間%d分%d秒です\n", h, m, s);
		}
	}
}