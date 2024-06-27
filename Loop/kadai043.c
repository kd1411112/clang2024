#include<stdio.h>
main()
{
	int ia;
	char moji;

	printf("文字コード（-1で入力終了)");
	scanf("%x", &ia);
	while (ia != -1) {
		printf("%c\n", ia + 0x00);

		printf("文字コード（-1で入力終了)");
		scanf("%x", &ia);
	}
}