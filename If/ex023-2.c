#include<stdio.h>
main()
{
	int year,uruu;
	printf("西暦を入力 : ");
	scanf("%d", &year);
	uruu = year % 4;
	if (uruu == 0) {
		printf("うるう年です");
	}
	else {
		printf("うるう年ではありません");
	}
}