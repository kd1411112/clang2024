#include<stdio.h>
/*main()
{
	int mon, day, year;
		printf("������� : ");
	scanf("%d", &mon);
	if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) {
		day = 31;
	}
	else {
		if (mon == 4 || mon == 6 || mon == 9 || mon == 11) {
			day = 30;
		}
		else {
			printf("����N�ł����H :");
			scanf("%d", &year);
			if (year % 4 == 0) {
				day = 29;
			}
			else {
				day = 28;
			}
		}
	}
	printf("�ŏI����%d���ł�", day);
}*/
main() {
	int mon, day;
	printf("������� : ");
	scanf("%d", &mon);
	if (mon == 2) {					//�����͂ł��邾�����Ȃ��Ȃ�悤�ɂ���B
		day = 28;
	}
	else {
		if (mon == 4 || mon == 6 || mon == 9 || mon == 11) {
			day = 30;
		}
		else {
			day = 31;
		}
	}
	printf("%d���ł�", day);
}