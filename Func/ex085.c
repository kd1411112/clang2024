#include<stdio.h>

void Str_cat(char* s1, char* s2);

main()
{
	char a[256], b[256];

	printf("配列a：");
	gets(a);
	printf("配列b：");
	gets(b);
	Str_cat(a, b);
	printf("配列a：%s\n", a);

}
//文字列1に文字列２を連結する
//戻り値	：なし
//引数		：char *s1・文字列１
//			：char *s2・文字列２

void Str_cat(char* s1, char* s2)
{
	int i, j;

	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);

}