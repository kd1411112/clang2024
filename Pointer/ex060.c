#include<stdio.h>
main()
{
	char data[] = "Language";
	char sch, * p_data;
	int cnt = 1;
	int flg = 0;	//ƒtƒ‰ƒO
	p_data = data;

	printf("data = %s\n\n", p_data);
	
	printf("ŒŸõ•¶š‚Í? ");
	scanf("%c", &sch);
	printf("ŒŸõŒ‹‰Ê‚ÍA\n");

	while (*p_data) {
		if (sch == *p_data) {
			printf("%d ‚Æ", cnt);
			flg = 1;
		}
		*p_data++;
		cnt++;
	}
	if (flg == 1) {
		printf("\b\b•¶š–Ú‚Å‚·\n");
	}
	else if (flg == 0) {
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½");
	}
	
}