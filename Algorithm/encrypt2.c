#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, n, k[20];
	char s[21];

	srand(time(0));

	printf("���������͂��Ă��������F");
	scanf("%s", &s);
	
	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 5 + 1;
		s[i] = s[i] + k[i];
	}
	
	printf("�Í���������́A%s\n", s);

	printf("�Í����L�[�́A");
	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}
}