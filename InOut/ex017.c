#include<stdio.h>
main()
{
	float no1, no2, no3;
	printf("1つ目の実数 : ");
	scanf("%f", &no1);
	printf("2つ目の実数 : ");
	scanf("%f", &no2);
	printf("3つ目の実数 : ");
	scanf("%f", &no3);
	printf("合計= %.2f 平均 =%.2f\n", no1 + no2 + no3, (no1 + no2 + no3) / 3);
}