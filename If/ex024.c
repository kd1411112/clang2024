#include<stdio.h>
/*main()
{
	char moji;
	printf("文字を入力 : ");
	scanf("%c", &moji);
	if (moji >= 0x41) {
		if (moji <= 0x5A) {
			printf("大文字です");
		}
		else {
			printf("その他の文字です");
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
	if (moji >= 'A' && moji <= 'Z') {
		printf("大文字です");
	}
	else {
		printf("その他の文字です");
	}
}