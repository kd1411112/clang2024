#include<stdio.h>
main()
{
	int a[][5] = { {3,6,9,12,15} }, b[5][5], c[5][5];
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			a[i][j] = i * 5 + j + 1;
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			b[i][j] = a[i][j] * 3;
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			c[i][j] = a[i][j] + b[i][j];
			printf("%3d ", c[i][j]);
		}
		printf("\n");
	}
}