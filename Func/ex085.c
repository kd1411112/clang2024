#include<stdio.h>

void Str_cat(char* s1, char* s2);

main()
{
	char a[256], b[256];

	printf("�z��a�F");
	gets(a);
	printf("�z��b�F");
	gets(b);
	Str_cat(a, b);
	printf("�z��a�F%s\n", a);

}
//������1�ɕ�����Q��A������
//�߂�l	�F�Ȃ�
//����		�Fchar *s1�E������P
//			�Fchar *s2�E������Q

void Str_cat(char* s1, char* s2)
{
	int i, j;

	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);

}