#include<stdio.h>
int main()
{
	char data[100];
	int i;
	i = 0;
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &data[0]);
	while (data[i]) {
		putchar(data[i]);
		putchar('\n');
		i++;
	}




	return 0;
}