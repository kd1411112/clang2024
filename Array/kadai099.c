#include<stdio.h>
main()
{
	char moji[100];
	int i;

	printf("回数と文字列を入力：");
	scanf(" %d %s", &i, &moji[0]);

	for (i; i > 0; i--) {
		printf(" %s\t", &moji[0]);
		
	}
}