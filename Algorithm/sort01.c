#include<stdio.h>
#define NUM	5
main()
{
	int d[NUM] = { 30,7,25,16,10 };
	int i, j, w;

	for (i = 0; i < NUM; i++) {
		printf("%d ", d[i]);
	}
	printf("\n");
	for (i = 0; i < NUM - 1; i++) {

		for (j = i + 1; j < NUM; j++) {

			if (d[i] > d[j]) {	//�����\�[�g(�s�������t���ƍ~���\�[�g)
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	printf("�\�[�g��\n");
	for (i = 0; i < NUM; i++) {
		printf("%d ", d[i]);
	}
}
