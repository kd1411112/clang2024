#include<stdio.h>
main()
{
	int sc, h=0, m=0, s=0;
	printf("�b������� : ");
	scanf("%d", &sc);
	if (sc < 0) {
		printf("�G���[�ł��B");
	}
	else {
		if (sc > 5000) {
			printf("�G���[�ł��B");
		}
		else {
			int h = sc / 3600;
			int	m = sc % 3600 / 60;
			int s = sc % 3600 % 60;
			printf("%d����%d��%d�b�ł�\n", h, m, s);
		}
	}
}