#include<stdio.h>
main()
{
	int i;
	float box[3], sum = 0;
	for (i = 0; i < 3; i++) {
		printf("実数を入力 :");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("合計は %.2f です\n", sum);
	printf("平均は %.2f です\n", sum / 3);
}