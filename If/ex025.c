#include<stdio.h>
/*main()
{
	char moji;
	printf("��������� : ");
	scanf("%c", &moji);
	if (moji >= 0x30) {
		if (moji <= 0x39) {
			printf("�����ł�");
		}
		else {
			if (moji >= 0x41) {
				if (moji <= 0x5A) {
					printf("�A���t�@�x�b�g�ł�");
				}
				else {
					if (moji >= 0x61) {
						if (moji <= 0x7A) {
							printf("�A���t�@�x�b�g�ł�");
						}
						else {
							printf("���̑��̕����ł�");
						}
					}
					else {
						printf("���̑��̕����ł�");
					}
				}
			}
			else {
				printf("���̑��̕����ł�");
			}
		}
	}
	else {
		printf("���̑��̕����ł�");
		
	}
}*/

main()
{
	char moji;
	printf("��������� : ");
	scanf("%c", &moji);
	if (moji >= 0x30 && moji <= 0x39) {
		printf("�����ł�");
	}
	else {
		if (moji >= 0x41 && moji <= 0x5A) {
			printf("�A���t�@�x�b�g�ł�");
		}
		else {
			if (moji >= 0x61 && moji <= 0x7A) {
				printf("�A���t�@�x�b�g�ł�");
			}
			else {
				printf("���̑��̕����ł�");
			}
		}
	}
}