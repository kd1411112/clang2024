#include<stdio.h>
main()
{
	char ia;
	printf("一文字入力？");
	scanf("%c", &ia);

	if (ia >= 'a' && 'z' >= ia) {
		printf("%c", ia - 0x20);
	}
	else if (ia >= 'A' && 'Z' >= ia) {
		printf("%c", ia + 0x20);
	}
	else if (ia >= '0' && '9' >= ia) {
		printf("%c", ia);
	}
	else {
		printf("ERROR");
	}
}