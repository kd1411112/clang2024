#include<stdio.h>
main()
{
	int i;
	char s[100];
	printf("暗号文を入力：");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0';i++) {
		s[i]--;

	}

	printf("%s", s);
}