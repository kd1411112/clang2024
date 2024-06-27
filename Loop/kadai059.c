#include<stdio.h>
main()
{
	int n1, n2;

	printf("   ");
	for (n1 = 1; n1 < 10; n1++) {
		printf(" %2d", n1);
	}
	printf("\n");
	printf("==============================\n\n");

	for (n1 = 1; n1 < 10; n1++) {
		printf("%d |",n1);

		for (n2 = 1; n2 < 10; n2++) {

			printf(" %2d", n1 * n2);
		}
		printf("\n");
	}

}