#include<stdio.h>
main() {
	int no, i, A;
	i = 0;
	A = 0;
	no = 0;
	for (no = 0; no != -999; i++) {		//なくても何とかなるときは何とかなる	
		printf("数は？ ");
		scanf("%d", &no);
		A = A + no;
	}
	A = A + 999;
	i = i - 1;
	printf("合計＝ %d\t平均＝ %.2f", A,(float)A / i);
}	