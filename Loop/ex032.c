#include<stdio.h>
main() {
	int no, i, A;
	printf("数を入れて :	");
	scanf("%d", &no);
	i = 1;
	for (i; i <= 5; i++) {
		A = no * i;
		printf("%d ", A);
	}
}