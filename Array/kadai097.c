#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 }, c[10];
	int i,j;

	j = 10 - 1;
	printf("”z—ña =");
	for (i = 0; i < 10; i++) {
		printf(" %d", a[i]);
		c[j] = a[i];
		j--;
	}
	printf("\n");
	printf("”z—ñc =");
	for (j = 0; j < 10; j++) {
		printf(" %d", c[j]);
	}

}