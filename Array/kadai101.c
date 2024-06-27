#include<stdio.h>
main()
{
	int a[][5] = { {1,2,3,4,5} };
	int i, j;

	printf("\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			a[i][j] = i * 5 + j + 1;
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
}