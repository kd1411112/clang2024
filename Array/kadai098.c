#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int min, max,i;

	printf("�z��@data =");
	min = data[0];
	max = data[0];
	
	for (i = 0; i < 10; i++) {
		printf(" %d", data[i]);
		if (min > data[i]) {
			min = data[i];
		}
		if (max< data[i]) {
			max = data[i];
		}

	}

	printf("\n�ő�l = %d \t �ŏ��l = %d", max, min);
}