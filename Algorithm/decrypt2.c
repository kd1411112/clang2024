#include<stdio.h>
main()
{
	int k[20],i;
	char s[21];

	printf("�Í������������́F");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]�̈Í��L�[��", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}

	printf("������������́F%s", &s[0]);
}