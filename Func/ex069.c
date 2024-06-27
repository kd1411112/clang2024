#include<stdio.h>
main()
{
	int num, sum, cnt;

	sum = 0;
	cnt = 0;

	printf("®”%dF",(cnt+1));
	while (scanf("%d", &num) != EOF) {
		
		sum += num;
		cnt++;
		printf("®”%dF",(cnt + 1));
	}

	printf("‡Œv=%d •½‹Ï=%.2f", sum, (float)sum / cnt);
}