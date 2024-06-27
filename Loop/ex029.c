#include<stdio.h>
/*main()
{
	int su;
	printf("数を入れて : ");
	scanf("%d", &su);
	while (n0 != 0) {	//もし、-2ずつ減らしていったときマイナスに突入したら0にならなくなってバグるから==や!=はあんま使わない。	
		n0 -= 1;
		printf("*");
	}
}*/
main()
{
	int su, i;
	printf("数を入れて");
	scanf("%d", &su);
	i = 0;
	while (i < su) {
		printf("*");
		i++;
	}
}