#include<stdio.h>
int main()
{
	char data[] = "GameSoft";
	int cnt, i;
	i = 0;
	cnt = 0;
	printf("������@���@");
	while (data[i]) {
		printf("%c", data[i]);
		i++;
		cnt++;
	}
	printf("\n�������@���@%d\n", cnt);

}