#include<stdio.h>
main()
{
	int ia, sum,cnt;
	sum = 0;
	cnt = 0;
	while (1) {
		printf("®”(-999‚ÅI—¹)H");
		scanf("%d", &ia);
		if(ia == -999)break;
		if (ia < 0)continue;
		sum += ia;
		cnt++;
	}

	printf("‡Œv = %d\n", sum);
	printf("•½‹Ï = %.3f\n", (float)sum / cnt);
}