#include<stdio.h>
int main()
{
	char data[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i, j;

	for (i = 0; i < 7; i++) {
		for (j = 0; j < 3; j++) {
			printf("%c", data[i][j]);
		}
		printf("\n");
	}

	return 0;
}