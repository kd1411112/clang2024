#include<stdio.h>
#define NUM	9
main()
{
	int d[NUM] = { 30,7,25,16,10,55,30,41,1};
	int i, j, w;

	for (i = 0; i < NUM; i++) {
		printf("%d ", d[i]);
	}
	printf("\n");
	
	for (i = NUM - 1; i > 0; i--) {

		printf("�\�[�g�͈�;d[0]�`d[%d]\n", i);

		for (j = 0; j < i; j++) {

			printf("d[%d]:%d��d[%d]:%d�̔�r\n", j, d[j], j + 1, d[j + 1]);
			if (d[j] > d[j + 1]) {
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
			
		}
		
		printf("\n");
	}

	printf("�\�[�g��\n");
	for (i = 0; i < NUM; i++) {
		printf("%d ", d[i]);
	}
}
