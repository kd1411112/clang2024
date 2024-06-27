#include<stdio.h>
int main()
{
	char data[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i;
	for (i = 0; i < 7; i++){
		puts(data[i]);
	}
	return 0;
}