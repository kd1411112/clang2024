#include<stdio.h>
main()
{
	int ope,n1,n2;
	float ans;
	printf("���Z�q����� : ");	//1:+,2:-,3:*,4:/
	scanf("%d", &ope);
	printf("2�̐�������� : ");
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
				if (ope == 4) {	//�^
					ans = n1 / n2;
				}
				else {
					printf("�G���[\t1:+,2:-,3:*,4:");
				}
			
			}
		}
	}
	printf("%.2f", ans);
}