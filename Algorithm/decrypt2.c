#include<stdio.h>
main()
{
	int k[20],i;
	char s[21];

	printf("暗号化文字列を入力：");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]の暗号キー＞", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}

	printf("復号化文字列は：%s", &s[0]);
}