#include<stdio.h>
int main()
{
	char data[100];
	int cnt, i;
	i = 0;
	cnt = 0;
	printf("文字列は？");
	scanf("%s", &data[0]);
	printf("文字列　＝　");
	while (data[i]) {
		printf("%c", data[i]);
		i++;
		cnt++;
	}
	printf("\n文字数　＝　%d\n", cnt);

}