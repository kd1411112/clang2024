#include<stdio.h>
main()
{
	int ia;
	printf("0 から 100 までの整数？");
	scanf("%d", &ia);

	if (ia >= 90) {
		printf("その数値の判定結果は「5」です");
	}
	else if (ia >= 80 && 90 > ia) {
		printf("その数値の判定結果は「4」です");
	}
	else if (ia >= 50 && 80 > ia) {
		printf("その数値の判定結果は「3」です");
	}
	else if (ia >= 30 && 50 > ia) {
		printf("その数値の判定結果は「2」です");
	}
	else {
		printf("その数値の判定結果は「1」です");
	}
}