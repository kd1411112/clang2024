#include<stdio.h>
main()
{
	char ia;
	printf("アルファベット小文字？");
	scanf("%c", &ia);
	for (; ia != '{'; ia++) {
		printf("%c ", ia);
	}
}