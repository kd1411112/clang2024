#include<stdio.h>
main()
{
	int a[][5] = { {3,6,9,12,15} }, c[5][5];
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			a[i][j] = (i * 5 + j + 1) * 3;
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			c[i][j] = a[i][j];
			printf("%2d ", c[i][j]);
		}
		printf("\n");
	}
	
	
}