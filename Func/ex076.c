#include<stdio.h>
void cal(int x, int y, int* wa, float* ave);

main()
{
	int a, b, c;
	float d;
	c = 0;
	d = 0;


	printf("整数を２つ入力：");
	scanf("%d %d" ,&a, &b);

	cal(a, b, &c, &d);

	printf("合計は %d 、平均は %.2f", c, d);

}

void cal(int x, int y, int* wa, float* ave)
{
	*wa = x + y;
	*ave = *wa / 2.0;
	return;
}