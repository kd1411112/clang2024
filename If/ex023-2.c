#include<stdio.h>
main()
{
	int year,uruu;
	printf("�������� : ");
	scanf("%d", &year);
	uruu = year % 4;
	if (uruu == 0) {
		printf("���邤�N�ł�");
	}
	else {
		printf("���邤�N�ł͂���܂���");
	}
}