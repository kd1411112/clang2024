#include<stdio.h>
main()
{
	int ope,n1,n2;
	float ans;
	printf("演算子を入力 : ");	//1:+,2:-,3:*,4:/
	scanf("%d", &ope);
	printf("2つの整数を入力 : ");
	scanf("%d%d", &n1, &n2);
	if (ope == 1) {				//+
		ans = n1 + n2;
	}
	else {
		if (ope == 2) {			//-
			ans = n1 - n2;
		}
		else {
			if (ope == 3) {		//*
				ans = n1 * n2;
			}
			else {
				if (ope == 4) {	//／
					ans = n1 / n2;
				}
				else {
					printf("エラー\t1:+,2:-,3:*,4:");
				}
			
			}
		}
	}
	printf("%.2f", ans);
}