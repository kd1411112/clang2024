#include<stdio.h>
main()
{
	float ia, wa, cnt;
	ia = 0;
	cnt = 0;
	wa = 0;

	while (ia != -999) {
		printf("����(-999�ŏI��)�H");
		scanf("%f", &ia);
		wa += ia;
		cnt++;
	}
	wa += 999;
	cnt--;
	printf("���v = %.0f", wa);
	printf("���� = %.2f", wa / cnt);
}