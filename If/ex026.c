#include<stdio.h>
/*main()
{
	int mon, day, year;
		printf("月を入力 : ");
	scanf("%d", &mon);
	if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) {
		day = 31;
	}
	else {
		if (mon == 4 || mon == 6 || mon == 9 || mon == 11) {
			day = 30;
		}
		else {
			printf("西暦何年ですか？ :");
			scanf("%d", &year);
			if (year % 4 == 0) {
				day = 29;
			}
			else {
				day = 28;
			}
		}
	}
	printf("最終日は%d日です", day);
}*/
main() {
	int mon, day;
	printf("月を入力 : ");
	scanf("%d", &mon);
	if (mon == 2) {					//条件はできるだけ少なくなるようにする。
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
	printf("%d日です", day);
}