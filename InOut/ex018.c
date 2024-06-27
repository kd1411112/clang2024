#include<stdio.h>
main()
{
	int n1, n2, n3,g;		//int型のほうが処理が速い
	printf("整数を3個入力 : ");
	scanf("%d%d%d", &n1, &n2, &n3);
	g = n1 + n2 + n3;
	printf("合計= %d     平均= %.2f\n", g, (float)g / 3);		//(型)変数で変数の型の変更が可能（一時的に）。（キャスト）
}