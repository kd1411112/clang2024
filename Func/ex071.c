//#include<stdio.h>
//int gokei(int a, int b,int c);
//float heikin(int a, int b, int c);
//main()
//{
//	int a, b, c, kotae1;
//	float kotae2;
//	printf("�������R���́F");
//	scanf(" %d %d %d", &a, &b, &c);
//	kotae1 = gokei(a, b, c);
//	kotae2 = heikin(a, b, c);
//	printf("���v�� %d �A���ς� %.2f �ł�\n", kotae1, kotae2);
//}
//
//int gokei(int a, int b, int c)
//{
//	int add;
//	add = a + b + c;
//	return(add);
//}
//
//float heikin(int a, int b, int c)
//{
//	float ave = (a + b + c) / 3;
//	return(ave);
//}

#include<stdio.h>
//�v���g�^�C�v�錾
int gokei(int, int, int);
float heikin(int, int, int);

main()
{
	int d1, d2, d3;
	printf("�������R���́F");
	scanf("%d%d%d", &d1, &d2, &d3);

	printf("���v�� %d �A���ς� %.2f", gokei(d1,d2,d3), heikin(d1, d2, d3));
}

int gokei(int d1, int d2, int d3) {
	return d1 + d2 + d3;
}

float heikin(int d1, int d2, int d3) {
	return(float)gokei(d1, d2, d3) / 3;
}