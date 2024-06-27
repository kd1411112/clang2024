#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int sum,cnt,i;
	sum = 0;
	cnt = 0;
	printf("配列 a = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
		sum += a[i];
		cnt++;
	}
	printf("\n合計＝ %d\t平均＝ %d\n", sum, sum / cnt);


	sum = 0;
	cnt = 0;
	printf("配列 b = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]);
		sum += b[i];
		cnt++;
	}
	printf("\n合計＝ %d\t平均＝ %d\n", sum, sum / cnt);
}