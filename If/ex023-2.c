#include<stdio.h>
main()
{
	int year,uruu;
	printf("¼—ï‚ğ“ü—Í : ");
	scanf("%d", &year);
	uruu = year % 4;
	if (uruu == 0) {
		printf("‚¤‚é‚¤”N‚Å‚·");
	}
	else {
		printf("‚¤‚é‚¤”N‚Å‚Í‚ ‚è‚Ü‚¹‚ñ");
	}
}