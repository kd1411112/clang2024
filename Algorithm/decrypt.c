#include<stdio.h>
main()
{
	int i;
	char s[100];
	printf("�Í�������́F");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0';i++) {
		s[i]--;

	}

	printf("%s", s);
}