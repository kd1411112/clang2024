#include<stdio.h>
main()
{
	int a[][3] = { {10,20,30},{1,2,3} };
	int i, j, gokei;
	
	for (i = 0; i < 2; i++) {
		for (j = 0, gokei = 0; j < 3; j++) {
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
			gokei += a[i][j];
		}
		printf("%d�s�ڂ̍��v = %d\n\n", i, gokei);
	}
}