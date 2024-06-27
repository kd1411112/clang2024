#include<stdio.h>
main()
{
	int i, a[5], b[3] = { 333,0,71 };	// 配列の初期化
	for (i = 0; i < 5; i++) {
		a[i] = (i + 1) * 10;	// ループ処理中にカウンタ変数をいじらない
	}

	for (i = 0; i < 5; i++) {
		printf("a[%d]=%d\n", i, a[i]);
	}
	for (i = 0; i < 3; i++) {
		printf("b[%d]=%d\n", i, b[i]);
	}
}