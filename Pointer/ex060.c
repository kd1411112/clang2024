#include<stdio.h>
main()
{
	char data[] = "Language";
	char sch, * p_data;
	int cnt = 1;
	int flg = 0;	//フラグ
	p_data = data;

	printf("data = %s\n\n", p_data);
	
	printf("検索文字は? ");
	scanf("%c", &sch);
	printf("検索結果は、\n");

	while (*p_data) {
		if (sch == *p_data) {
			printf("%d と", cnt);
			flg = 1;
		}
		*p_data++;
		cnt++;
	}
	if (flg == 1) {
		printf("\b\b文字目です\n");
	}
	else if (flg == 0) {
		printf("見つかりませんでした");
	}
	
}