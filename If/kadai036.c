#include<stdio.h>
main()
{
	int ia, ib;
	printf("®”‚PH");
	scanf("%d", &ia);
	printf("®”‚QH");
	scanf("%d", &ib);

	if (ia < ib) {
		printf("%d ‚Ì‚Ù‚¤‚ª %d ‚æ‚è %d ‘å‚«‚¢", ib, ia, ib - ia);
	}
	else if (ia > ib) {
		printf("%d ‚Ì‚Ù‚¤‚ª %d ‚æ‚è %d ‘å‚«‚¢", ia, ib, ia - ib);
	}
	else {
		printf("%d ‚Æ %d ‚Í“™‚µ‚¢", ia, ib);
	}
}