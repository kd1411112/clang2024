#include<stdio.h>
main()
{
	int ope,n1,n2;
	float ans;
	printf("‰‰Zq‚ğ“ü—Í : ");	//1:+,2:-,3:*,4:/
	scanf("%d", &ope);
	printf("2‚Â‚Ì®”‚ğ“ü—Í : ");
	scanf("%d%d", &n1, &n2);
	if (ope == 1) {				//+
		ans = n1 + n2;
	}
	else {
		if (ope == 2) {			//-
			ans = n1 - n2;
		}
		else {
			if (ope == 3) {		//*
				ans = n1 * n2;
			}
			else {
				if (ope == 4) {	//^
					ans = n1 / n2;
				}
				else {
					printf("ƒGƒ‰[\t1:+,2:-,3:*,4:");
				}
			
			}
		}
	}
	printf("%.2f", ans);
}