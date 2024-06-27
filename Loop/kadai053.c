#include<stdio.h>
main()
{
	int ia;
	printf("®”H");
	scanf("%d", &ia);

	for (int i = 0; i <= 10; i++) {
		printf("%d ", ia + i);
	}
}