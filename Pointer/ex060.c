#include<stdio.h>
main()
{
	char data[] = "Language";
	char sch, * p_data;
	int cnt = 1;
	int flg = 0;	//�t���O
	p_data = data;

	printf("data = %s\n\n", p_data);
	
	printf("����������? ");
	scanf("%c", &sch);
	printf("�������ʂ́A\n");

	while (*p_data) {
		if (sch == *p_data) {
			printf("%d ��", cnt);
			flg = 1;
		}
		*p_data++;
		cnt++;
	}
	if (flg == 1) {
		printf("\b\b�����ڂł�\n");
	}
	else if (flg == 0) {
		printf("������܂���ł���");
	}
	
}