#include<stdio.h>
main()
{
	int ia;
	printf("整数（-999で入力終了）？");
	scanf("%d", &ia);
	while (ia != -999) {
		printf("８進数 = %o\t１６進数 = %x\n", ia, ia);
		printf("整数（-999で入力終了）？");
		scanf("%d", &ia);
	}
}