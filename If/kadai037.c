#include<stdio.h>
main()
{
	int ia;
	printf("0 ���� 100 �܂ł̐����H");
	scanf("%d", &ia);

	if (ia >= 90) {
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�");
	}
	else if (ia >= 80 && 90 > ia) {
		printf("���̐��l�̔��茋�ʂ́u4�v�ł�");
	}
	else if (ia >= 50 && 80 > ia) {
		printf("���̐��l�̔��茋�ʂ́u3�v�ł�");
	}
	else if (ia >= 30 && 50 > ia) {
		printf("���̐��l�̔��茋�ʂ́u2�v�ł�");
	}
	else {
		printf("���̐��l�̔��茋�ʂ́u1�v�ł�");
	}
}