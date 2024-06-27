#include<stdio.h>
main()
{
	char moji[] = "abcde";
	int i;
	i = 0;
	while (moji[i] != '\0') {
		printf("%c", moji[i]);
		i++;
	}
}