#include<stdio.h>
main()
{
	int ia;
	char moji;

	printf("�����R�[�h�i-1�œ��͏I��)");
	scanf("%x", &ia);
	while (ia != -1) {
		printf("%c\n", ia + 0x00);

		printf("�����R�[�h�i-1�œ��͏I��)");
		scanf("%x", &ia);
	}
}