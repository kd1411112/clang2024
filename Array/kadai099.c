#include<stdio.h>
main()
{
	char moji[100];
	int i;

	printf("�񐔂ƕ��������́F");
	scanf(" %d %s", &i, &moji[0]);

	for (i; i > 0; i--) {
		printf(" %s\t", &moji[0]);
		
	}
}