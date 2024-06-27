#include<stdio.h>
int main()
{
	char data[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i, j = 0;
	for (i = 0; i < 7; i++){
		while (data[i][j]) {
			putchar(data[i][j]);
			j++;
		}
		j = 0;
		putchar('\n');

	}
	return 0;
}