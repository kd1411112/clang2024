#include<stdio.h>
main()
{
	int ia, ib;
	printf("��̐��l�H");
	scanf("%d %d", &ia, &ib);
	printf("������ %d �� %d �̎l�����Z������\n", ia, ib);

	printf("%d + %d = %d\n", ia, ib, ia+ib);
	printf("%d - %d = %d\n", ia, ib, ia-ib);
	printf("%d * %d = %d\n", ia, ib, ia*ib);
	printf("%d / %d = %d ���܂� %d\n", ia, ib, ia/ib,ib%ib);
}