#include<stdio.h>
main()
{
	char ope;
	int n0, n1, n2;
	printf("処理を入力 : ");
	scanf("%c", &ope);
	printf("整数を入力 : ");
	scanf("%d %d %d", &n0, &n1, &n2);

	switch (ope) {

	case 'd':
	case 'D':
		if (n0 > n1) {
			if (n0 > n2) {
				printf("最大値は%dです\n", n0);
		}
		else {
			printf("最大値は%dです\n", n2);
		}
	}
				   else {
		if (n1 > n2) {
			printf("最大値は%dです\n", n1);
		}
		else {
			printf("最大値は%dです\n", n2);
		}
	}
				   break;


	case 's':
	case 'S':
		if (n0 < n1) {
			if (n0 < n2) {
				printf("最小値は%dです\n", n0);
		}
		else {
			printf("最小値は%dです\n", n2);
		}
	}
				   else {
		if (n1 < n2) {
			printf("最小値は%dです\n", n1);
		}
		else {
			printf("最小値は%dです\n", n2);
		}
	}
				   break;


	case 'g':
	case 'G':
		printf("合計は%dです\n", n0 + n1 + n2);
		break;

	case 'h':
	case 'H':
		printf("平均は%.2fです\n", (float)(n0 + n1 + n2) / 3);
		break;

	default:	printf("エラー\n");
	}
}