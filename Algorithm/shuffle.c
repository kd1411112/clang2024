#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, data[20],target,work;
	for (i = 0; i < 20; i++) {
		data[i] = i + 1;
	}

	i = 0;
	srand(time(0));
	while (i < 20) {
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
		i++;
	}
	srand(time(0));
	for (i = 0; i < 20; i++) {
		printf("%d\n", data[i]);
	}

}