#include<stdio.h>
void display(int a);		//プロトタイプ宣言

main()
{
	int a;
	printf(" data ?:");
	scanf(" %d", &a);
	display(a);		//関数displayの呼び出し
}

void display(int a)	//関数displayの記述
{
	printf("入力データ = %d\n", a);
	return;
}