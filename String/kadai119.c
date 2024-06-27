#include<stdio.h>
int main()
{
	char data[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i, j;

	for (i = 0; i < 7; i++) {
		if (data[i][0] == 's') {
			printf("%s\n", data[i]);
		}
	}

	return 0;
}