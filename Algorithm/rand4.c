#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int star;

	srand(time(0));
	rand();
	star = rand() % 5 + 1;

	printf("�����̉^���́A");

	for (star; star > 0; star--) {
		printf("�� ");
	}

	printf("�ł��B\n");
}