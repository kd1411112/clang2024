#include<stdio.h>
int main()
{
	char data[100];
	int cnt, i;
	i = 0;
	cnt = 0;
	printf("������́H");
	scanf("%s", &data[0]);
	printf("������@���@");
	while (data[i]) {
		printf("%c", data[i]);
		i++;
		cnt++;
	}
	printf("\n�������@���@%d\n", cnt);

}