#include<stdio.h>
main() {
	int no, i, A;
	i = 0;
	A = 0;
	no = 0;
	for (no = 0; no != -999; i++) {		//�Ȃ��Ă����Ƃ��Ȃ�Ƃ��͉��Ƃ��Ȃ�	
		printf("���́H ");
		scanf("%d", &no);
		A = A + no;
	}
	A = A + 999;
	i = i - 1;
	printf("���v�� %d\t���ρ� %.2f", A,(float)A / i);
}	