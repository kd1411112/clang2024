#include<stdio.h>
main() {


	int	i, A;
	i = 1;
	A = 0;
	for (1; i <= 10; i++) {
		A = i + A;
		printf("1 から %d までの和 = %d\n",i, A);
	}
}