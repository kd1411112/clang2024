#include<stdio.h>
main() {
	int no, i, A;
	printf("�������� :	");
	scanf("%d", &no);
	i = 1;
	for (i; i <= 5; i++) {
		A = no * i;
		printf("%d ", A);
	}
}