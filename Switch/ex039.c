#include<stdio.h>
main()
{
	char ope;
	int n0, n1, n2;
	printf("��������� : ");
	scanf("%c", &ope);
	printf("��������� : ");
	scanf("%d %d %d", &n0, &n1, &n2);

	switch (ope) {

	case 'd':
	case 'D':
		if (n0 > n1) {
			if (n0 > n2) {
				printf("�ő�l��%d�ł�\n", n0);
		}
		else {
			printf("�ő�l��%d�ł�\n", n2);
		}
	}
				   else {
		if (n1 > n2) {
			printf("�ő�l��%d�ł�\n", n1);
		}
		else {
			printf("�ő�l��%d�ł�\n", n2);
		}
	}
				   break;


	case 's':
	case 'S':
		if (n0 < n1) {
			if (n0 < n2) {
				printf("�ŏ��l��%d�ł�\n", n0);
		}
		else {
			printf("�ŏ��l��%d�ł�\n", n2);
		}
	}
				   else {
		if (n1 < n2) {
			printf("�ŏ��l��%d�ł�\n", n1);
		}
		else {
			printf("�ŏ��l��%d�ł�\n", n2);
		}
	}
				   break;


	case 'g':
	case 'G':
		printf("���v��%d�ł�\n", n0 + n1 + n2);
		break;

	case 'h':
	case 'H':
		printf("���ς�%.2f�ł�\n", (float)(n0 + n1 + n2) / 3);
		break;

	default:	printf("�G���[\n");
	}
}