#include<stdio.h>
main() {
	int i, j;
	i = 0;
	printf("���́H");
	scanf("%d", &i);
	if (i < 0) {
		printf("�G���[");
	}
	else {
		do {
			j = 5;
			do {
				printf("*");
				j--;
			} while (j > 0);
			printf("\n");
			i--;
		} while (i > 0);
	}
	}
	