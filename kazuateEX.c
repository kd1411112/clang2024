#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int A, num, Q, i, j;
	srand(time(0)); 
	rand(); 

	A = rand() % 300 + 1;

	printf("�����ăQ�[��\n");
	printf("1�`300�܂ł̐������Ȃ��񐔂œ��Ă�Q�[��\n\n");
	printf("�U��ɂP��̕p�x�ŉR������\n\n");
	printf("����!���\�����ꂽ�璍�ӁI�R���̂P�̊m���ŉR�����Ă����I\n\n");
	printf("777�Ɠ��͂���ƑO����͂����Ƃ��ɉR�����ꂽ���ǂ����킩���I\n\n");
	printf("�������P�񂵂��g���Ȃ����璍�ӁI\n\n\n");

	i = 0;
	j = 1;

	while (1) {

		printf("��(1~300)�����:");
		scanf("%d", &num);
		i++; 

		if (num == 777) {

			if (j == 1 && Q == 6) {
				printf("�������͉̂R��������I\n\n");
				j--;
			}
			else if (j == 1 && Q != 6) {
				printf("�������͖̂{����������I\n\n");
				j--;
			}
			else {
				printf("�����g���Ȃ���I\n\n");
			}
			printf("��(1~300)�����:");
			scanf("%d", &num);
			i++;

		}
		
		Q = rand() % 6 + 1;
		
		if (Q == 6) {
			if (A > num) {
				printf("%d��菬�����ł�\n\n", num);
			}
			else if (A < num) {
				printf("%d���傫���ł�\n\n", num);
			}
			else {
				printf("������! %d��œ��Ă܂���\n", i);
				break;
			}
		}
		else {
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
		
		if (Q % 2 == 0) {
			printf("!!!!!!!!!!!!!!!\n\n");
		}
	}
}