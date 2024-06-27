#include<stdio.h>
main()
{
	int no;
	printf("１６進数を入力してください（例:0x41) : ");
	scanf("%x", &no);
	printf("入力値は%cです。\n", no);
}