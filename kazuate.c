#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int A, num, i;
	srand(time(0)); 
	rand(); 

	A = rand() % 100 + 1;

	printf("数当てゲーム\n");
	printf("1〜100までの数を少ない回数で当てるゲーム\n\n");

	i = 0;

	while (1) {

		printf("数(1~100)を入力:");
		scanf("%d", &num);
		i++; 

		if (A > num) {
			printf("%dより大きいです\n\n", num);
		}
		else if (A < num) {
			printf("%dより小さいです\n\n", num);
		}
		else {
			printf("当たり! %d回で当てました\n", i);
			break;
		}
	}
}