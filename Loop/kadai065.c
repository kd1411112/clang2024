#include<stdio.h>
main()
{
	int num, sum, cnt;
	num = 0;
	sum = 0;
	cnt = 0;
	do {
		printf("�����i-999 �ŏI���j�H");
		scanf("%d", &num);
		sum += num;
		cnt++;
	} while (num != -999);

	sum += 999;
	cnt--;
	printf("���v = %d\n", sum);
	printf("���� = %f\n", (float)sum / cnt);
}