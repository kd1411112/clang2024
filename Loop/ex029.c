#include<stdio.h>
/*main()
{
	int su;
	printf("�������� : ");
	scanf("%d", &su);
	while (n0 != 0) {	//�����A-2�����炵�Ă������Ƃ��}�C�i�X�ɓ˓�������0�ɂȂ�Ȃ��Ȃ��ăo�O�邩��==��!=�͂���܎g��Ȃ��B	
		n0 -= 1;
		printf("*");
	}
}*/
main()
{
	int su, i;
	printf("��������");
	scanf("%d", &su);
	i = 0;
	while (i < su) {
		printf("*");
		i++;
	}
}