#include<stdio.h>
void error_msg(void);		//�v���g�^�C�v�錾

main()
{
	int a,b;
	printf(" data1 data2 ?:");
	scanf(" %d%d", &a,&b);

	if (b == 0) {
		error_msg();
	}
	else {
		printf("%d / %d = %d�E�E�E%d", a, b, a / b, a % b);
	}
	
}

void error_msg(void)	//�֐��̋L�q
{
	printf("�O�Ŋ���Z�͂ł��܂���\n");
	return;
}