#include<stdio.h>
main()
{
	int i, gokei;
	//�z��̐擪�v�f���̂ݏȗ��ł���
	int a[][3] = { {130,240,350},{13,12,33} };
	for (gokei = 0, i = 0; i <= 2; i++) {
		printf("a[0][%d]=%d\n", i, a[0][i]);
		gokei += a[0][i];
	}
	printf("�O�s�ڂ̍��v=%d\n\n", gokei);

	for (gokei = 0, i = 0; i <= 2; i++) {
		printf("a[1][%d]=%d\n", i, a[1][i]);
		gokei += a[1][i];
	}
	printf("1�s�ڂ̍��v=%d\n\n", gokei);
}