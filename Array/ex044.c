#include<stdio.h>
main()
{
	char moji1[80], moji2[80], w[80];
	int i;
	
	printf("������P����� : ");
	scanf("%s", &moji1[0]);
	printf("������Q����� : ");
	scanf("%s", &moji2[0]);

	printf("moji1 = %s", &moji1[0]);
	printf("\t moji2 = %s\n", &moji2[0]);

	for (i = 0; w[i] = moji1[i]; i++);
	for (i = 0; moji1[i] = moji2[i]; i++);
	for (i = 0; moji2[i] = w[i]; i++);

	printf("����ւ����\n");
	printf("moji1 = %s \t moji2 = %s\n", &moji1[0], &moji2[0]);
}