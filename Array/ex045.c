#include<stdio.h>
main()
{
	int i, gokei;
	//配列の先頭要素数のみ省略できる
	int a[][3] = { {130,240,350},{13,12,33} };
	for (gokei = 0, i = 0; i <= 2; i++) {
		printf("a[0][%d]=%d\n", i, a[0][i]);
		gokei += a[0][i];
	}
	printf("０行目の合計=%d\n\n", gokei);

	for (gokei = 0, i = 0; i <= 2; i++) {
		printf("a[1][%d]=%d\n", i, a[1][i]);
		gokei += a[1][i];
	}
	printf("1行目の合計=%d\n\n", gokei);
}