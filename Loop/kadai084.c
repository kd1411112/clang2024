#include<stdio.h>
main() {
	int ia, ib;

	while (1) {
		printf("�����P(-999�ŏI��)�H");
		scanf("%d", &ia);
		if (ia == -999)break;
		if (ia == 0)continue;
		printf("�����Q(-999�ŏI��)�H");
		scanf("%d", &ib);
		if (ib == -999)break;
		if (ib == 0)continue;
		printf("%d / %d = %d ���܂� %d\n", ia, ib, ia / ib, ia % ib);

	}
}