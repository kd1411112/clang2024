#include<stdio.h>
main()
{
	int ia, ib;
	printf("�����P�H");
	scanf("%d", &ia);
	printf("�����Q�H");
	scanf("%d", &ib);

	if (ia < ib) {
		printf("%d �̂ق��� %d ��� %d �傫��", ib, ia, ib - ia);
	}
	else if (ia > ib) {
		printf("%d �̂ق��� %d ��� %d �傫��", ia, ib, ia - ib);
	}
	else {
		printf("%d �� %d �͓�����", ia, ib);
	}
}