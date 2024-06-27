#include<stdio.h>
main()
{
	int num, sum, cnt;
	num = 0;
	sum = 0;
	cnt = 0;
	do {
		printf("整数（-999 で終了）？");
		scanf("%d", &num);
		sum += num;
		cnt++;
	} while (num != -999);

	sum += 999;
	cnt--;
	printf("合計 = %d\n", sum);
	printf("平均 = %f\n", (float)sum / cnt);
}