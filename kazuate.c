#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int A, num, i;
	srand(time(0)); 
	rand(); 

	A = rand() % 100 + 1;

	printf("�����ăQ�[��\n");
	printf("1�`100�܂ł̐������Ȃ��񐔂œ��Ă�Q�[��\n\n");

	i = 0;

	while (1) {

		printf("��(1~100)�����:");
		scanf("%d", &num);
		i++; 

		if (A > num) {
			printf("%d���傫���ł�\n\n", num);
		}
		else if (A < num) {
			printf("%d��菬�����ł�\n\n", num);
		}
		else {
			printf("������! %d��œ��Ă܂���\n", i);
			break;
		}
	}
}