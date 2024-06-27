#include<stdio.h>
main() {
	int	ia, ib;
	char ope;

	printf("®”‚PH");
	scanf("%d", &ia);
	printf("®”‚QH");
	scanf(" %d", &ib);
	printf("‰‰ZqH");
	scanf(" %c", &ope);

	switch (ope) {
	case '+':
		printf("%d %c %d = %d", ia, ope, ib, ia + ib);
		break;

	case '-':
		printf("%d %c %d = %d", ia, ope, ib, ia - ib);
		break;

	case '*':
		printf("%d %c %d = %d", ia, ope, ib, ia * ib);
		break;

	case '/':
		printf("%d %c %d = %d", ia, ope, ib, ia / ib);
		break;

	case '%':
		printf("%d %c %d = %d", ia, ope, ib, ia % ib);
		break;
	}
}