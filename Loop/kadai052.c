#include<stdio.h>
main()
{
	int ia;
	for (ia = 1; ia <= 60; ia++) {
		
		printf("%d ", ia);
		if (ia % 20 == 0) {
			printf("\n");
		}
	}
}