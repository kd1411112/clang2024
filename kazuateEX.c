#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int A, num, Q, i, j;
	srand(time(0)); 
	rand(); 

	A = rand() % 300 + 1;

	printf("数当てゲーム\n");
	printf("1〜300までの数を少ない回数で当てるゲーム\n\n");
	printf("６回に１回の頻度で嘘をつくよ\n\n");
	printf("下に!が表示されたら注意！３分の１の確率で嘘をついているよ！\n\n");
	printf("777と入力すると前回入力したときに嘘がつかれたかどうかわかるよ！\n\n");
	printf("ただし１回しか使えないから注意！\n\n\n");

	i = 0;
	j = 1;

	while (1) {

		printf("数(1~300)を入力:");
		scanf("%d", &num);
		i++; 

		if (num == 777) {

			if (j == 1 && Q == 6) {
				printf("さっきのは嘘だったよ！\n\n");
				j--;
			}
			else if (j == 1 && Q != 6) {
				printf("さっきのは本当だったよ！\n\n");
				j--;
			}
			else {
				printf("もう使えないよ！\n\n");
			}
			printf("数(1~300)を入力:");
			scanf("%d", &num);
			i++;

		}
		
		Q = rand() % 6 + 1;
		
		if (Q == 6) {
			if (A > num) {
				printf("%dより小さいです\n\n", num);
			}
			else if (A < num) {
				printf("%dより大きいです\n\n", num);
			}
			else {
				printf("当たり! %d回で当てました\n", i);
				break;
			}
		}
		else {
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
		
		if (Q % 2 == 0) {
			printf("!!!!!!!!!!!!!!!\n\n");
		}
	}
}