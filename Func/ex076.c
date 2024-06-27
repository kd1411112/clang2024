#include<stdio.h>
void cal(int x, int y, int* wa, float* ave);

main()
{
	int a, b, c;
	float d;
	c = 0;
	d = 0;


	printf("®”‚ğ‚Q‚Â“ü—ÍF");
	scanf("%d %d" ,&a, &b);

	cal(a, b, &c, &d);

	printf("‡Œv‚Í %d A•½‹Ï‚Í %.2f", c, d);

}

void cal(int x, int y, int* wa, float* ave)
{
	*wa = x + y;
	*ave = *wa / 2.0;
	return;
}