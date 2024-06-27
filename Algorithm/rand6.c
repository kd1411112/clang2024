#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p, c;
	printf("何を出しますか？\n");
	printf("（１：グー　２：チョキ　３：パー）＞");
	scanf("%d", &p);

	srand(time(0));
	rand();
	c = rand() % 3 + 1;

	switch (p) {
		case 1:	printf("あなたはグーを出しました\n\n");
			break;

		case 2:	printf("あなたはチョキを出しました\n\n");
			break;

		case 3: printf("あなたはパーを出しました\n\n");
			break;
	}

	switch (c) {
		case 1:	printf("comはグーを出しました\n\n");
			break;

		case 2:	printf("comはチョキを出しました\n\n");
			break;

		case 3: printf("comはパーを出しました\n\n");
			break;
	}

	switch ((p - c + 3 + 3) % 3) {
		case 0: printf("相子です\n");
			break;

		case 1: printf("あなたの負けです\n");
			break;

		case 2: printf("あなたの勝ちです\n");
			break;

	}
	


}