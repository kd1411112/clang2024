#include<stdio.h>
main()
{
	char ia;
	printf("�P�������́H");
	scanf("%c", &ia);
	if (0x41 <= ia && ia <= 0x5A) {
		printf("���̕����́u�啶���v�ł�\n");
	}
	else if (0x61 <= ia && ia <= 0x7A) {
		printf("���̕����́u�������v�ł�\n");
	}
	else {
		printf("ERROR\n");
	}
}