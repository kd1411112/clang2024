#include<stdio.h>
/*main() {
	int i, j, col;
	i = 0;
	j = 0;
	col = 0;
	printf("数を入れて : ");
	scanf("%d", &i);
	do {
		col++;
		j = col;
		do {
			printf("*");
				j--;
		} while (j > 0);
		printf("\n");
		i--;
	} while (i > 0);
}*/

main()
{
	int num, i, j;

	printf("数は？");
	scanf("%d", &num);

	i = 0;
	do {
		j = 0;
		do {
			printf("*");
			j++;
		} while (j < i + 1);
		printf("\n");
		i++;
	} while (i < num);
}