#include<stdio.h>
/*main()
{
	char moji;
	printf("文字を入力 : ");
	scanf("%c", &moji);
	if (moji >= 0x30) {
		if (moji <= 0x39) {
			printf("数字です");
		}
		else {
			if (moji >= 0x41) {
				if (moji <= 0x5A) {
					printf("アルファベットです");
				}
				else {
					if (moji >= 0x61) {
						if (moji <= 0x7A) {
							printf("アルファベットです");
						}
						else {
							printf("その他の文字です");
						}
					}
					else {
						printf("その他の文字です");
					}
				}
			}
			else {
				printf("その他の文字です");
			}
		}
	}
	else {
		printf("その他の文字です");
		
	}
}*/

main()
{
	char moji;
	printf("文字を入力 : ");
	scanf("%c", &moji);
	if (moji >= 0x30 && moji <= 0x39) {
		printf("数字です");
	}
	else {
		if (moji >= 0x41 && moji <= 0x5A) {
			printf("アルファベットです");
		}
		else {
			if (moji >= 0x61 && moji <= 0x7A) {
				printf("アルファベットです");
			}
			else {
				printf("その他の文字です");
			}
		}
	}
}