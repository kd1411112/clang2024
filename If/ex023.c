#include<stdio.h>
main()
{
	int sc, h=0, m=0, s=0;
	printf("•b”‚ğ“ü—Í : ");
	scanf("%d", &sc);
	if (sc < 5000) {
		int h = sc / 3600;
		int m = sc % 3600 / 60;
		int s = sc % 3600 % 60;
		printf("%dŠÔ%d•ª%d•b‚Å‚·\n", h, m, s);
	}
	else {
		printf("ƒGƒ‰[‚Å‚·B");
	}
}