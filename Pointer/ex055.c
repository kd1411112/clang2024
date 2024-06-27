#include<stdio.h>
main() {
	int a[] = { 11,22,33,44,55,66 };
	float b[]={ 11.1,22.2,33.3,44.4 };
	int* pa;	//a用ポインタ
	float* pb;	//b用ポインタ
	int i, ga;	//カウンタ、a合計用
	float gb;	//b合計用

	pa = a;		//aのアドレス代入
	pb = b;		//bのアドレス代入

	for (ga = 0, i = 0; i < 6; i++) {		//aの合計クリア、６回ループ
		ga += *pa;							//合計に足しこみ
		pa++;								//ポインタを進める
	}
	printf("配列a\t合計 = %d \t平均%.3f\n", ga, ga / 6.0);

	for (gb = 0, i = 0; i < 4; i++) {		//bの合計クリア、４回ループ
		gb += *pb;							//合計に足しこみ
		pb++;								//ポインタを進める
	}
	printf("配列b\t合計 = %.3f \t平均%.3f\n", gb, gb / 4.0);
}