#include<stdio.h>
#include <stdlib.h> //乱数を使うときに必要です
#include <time.h> //乱数を使うときに必要です
main()
{
	int kazu;
	
	srand(time(0));
	kazu = rand();
	printf("乱数は%dです", kazu);
}