#include<stdio.h>
main() {
	int i, j, col,spe;//i=入力した数 j=* col=列 spe=スペース
	i = 0;
	col = 0;
	spe = 0;
	printf("数を入れて : ");
	scanf("%d", &i);
	do {
		j = 0;
		col++;
		j = col;
		spe = i - col;
		do {
			printf(" ");
			spe--;
		}while(spe>0);
		do {
			printf("*");
				j--;
		} while (j > 0);
		printf("\n");
		i--;
	} while (i > 0);
}
/*main()
{
	int num, i, j;

	printf("数は？");
	scanf("%d", &num);

	i = 0;
	do {
		j = 0;
		do {
			printf(" ");
			j++;
		} while (j < num - i);
		j = 0;
		do {
			printf("*");
			j++;
		} while (j < i + 1);
		printf("\n");
		i++;
	} while (i < num);
}*/