#include<stdio.h>
main()
{
	char note;
	printf("����������� : ");
	scanf("%c", &note);
	printf("�啶���ɕϊ����� : %c\n", note - 0x20);
}