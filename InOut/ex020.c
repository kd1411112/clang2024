#include<stdio.h>
main()
{
	char note;
	printf("小文字を入力 : ");
	scanf("%c", &note);
	printf("大文字に変換して : %c\n", note - 0x20);
}