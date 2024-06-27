#include<stdio.h>
main()
{
	char ia;
	printf("１文字入力？");
	scanf("%c", &ia);
	if (0x41 <= ia && ia <= 0x5A) {
		printf("その文字は「大文字」です\n");
	}
	else if (0x61 <= ia && ia <= 0x7A) {
		printf("その文字は「小文字」です\n");
	}
	else {
		printf("ERROR\n");
	}
}