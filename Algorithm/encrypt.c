#include<stdio.h>
main()
{
	int i;
	char s[100];
	printf("文字列を入力");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		s[i]++;
	}

	printf("%s", s);
}