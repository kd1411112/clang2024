#include<stdio.h>
main()
{
	int a[][5] = { {3,6,9,12,15} }, b[5][5],x[5][5];
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
			x[i][j] = a[i][j];
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			a[i][j] = b[i][j];
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			b[i][j] = x[i][j];
		}
	}

	printf("”z—ña\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf(" %2d ", a[i][j]);
		}
		printf("\n");
	}

	printf("\n”z—ñb\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf(" %2d ", b[i][j]);
		}
		printf("\n");
	}
}
