#include<stdio.h>

void Str_cat(char* s1, char* s2);

main()
{
	char a[256], b[256];

	printf("zρaF");
	gets(a);
	printf("zρbF");
	gets(b);
	Str_cat(a, b);
	printf("zρaF%s\n", a);

}
//Άρ1ΙΆρQπA·ι
//ίθl	FΘ΅
//ψ		Fchar *s1EΆρP
//			Fchar *s2EΆρQ

void Str_cat(char* s1, char* s2)
{
	int i, j;

	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);

}