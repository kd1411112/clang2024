#include<stdio.h>
main()
{
	char moji;
	printf("��������� : ");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		printf("�ϊ������%c", moji + 0x20);
	}
	else {
		if (moji >= 'a' && moji <= 'z') {
			printf("�ϊ������%c", moji - 0x20);
		}
		else {
			printf("�G���[");
		}
	}
}
