#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int r, i, j;
	for (i = 0; i < 100; i++) {

		for (j = 0; j < 10; j++) {
			r = rand() % 300 + 1;
			printf("%4d ", r);
		}
		printf("\n");
	}
	
	


}