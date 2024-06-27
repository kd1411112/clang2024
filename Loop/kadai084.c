#include<stdio.h>
main() {
	int ia, ib;

	while (1) {
		printf("整数１(-999で終了)？");
		scanf("%d", &ia);
		if (ia == -999)break;
		if (ia == 0)continue;
		printf("整数２(-999で終了)？");
		scanf("%d", &ib);
		if (ib == -999)break;
		if (ib == 0)continue;
		printf("%d / %d = %d あまり %d\n", ia, ib, ia / ib, ia % ib);

	}
}