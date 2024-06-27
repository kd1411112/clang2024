#include<stdio.h>
#define MAX_SIZE 3
main()
{
	char* p_ride[MAX_SIZE] = { "car","bus","shinkansen" };
	int i;

	for (i = 0; i < MAX_SIZE; i++) {
		while (*p_ride[i]) {
			putchar(*p_ride[i]++);
		}
		putchar('\n');
	}
}
