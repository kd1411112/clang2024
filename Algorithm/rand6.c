#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p, c;
	printf("�����o���܂����H\n");
	printf("�i�P�F�O�[�@�Q�F�`���L�@�R�F�p�[�j��");
	scanf("%d", &p);

	srand(time(0));
	rand();
	c = rand() % 3 + 1;

	switch (p) {
		case 1:	printf("���Ȃ��̓O�[���o���܂���\n\n");
			break;

		case 2:	printf("���Ȃ��̓`���L���o���܂���\n\n");
			break;

		case 3: printf("���Ȃ��̓p�[���o���܂���\n\n");
			break;
	}

	switch (c) {
		case 1:	printf("com�̓O�[���o���܂���\n\n");
			break;

		case 2:	printf("com�̓`���L���o���܂���\n\n");
			break;

		case 3: printf("com�̓p�[���o���܂���\n\n");
			break;
	}

	switch ((p - c + 3 + 3) % 3) {
		case 0: printf("���q�ł�\n");
			break;

		case 1: printf("���Ȃ��̕����ł�\n");
			break;

		case 2: printf("���Ȃ��̏����ł�\n");
			break;

	}
	


}