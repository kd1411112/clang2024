#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},
					 {40,50,60},
					 {70,80,90} };
	int* p_tbl, i;
	p_tbl = tbl[0];		//0�s�ڂ̐擪�A�h���X������
	printf("2�����z��tbl�̓��e\n");
	for (i = 0; i < (3*3); i++) {		//i<(�s�~��)
		printf(" %d ", *p_tbl++);		//| printf(" %d ",*p_	\tbl);
		//���\��������Ɏ��̃f�[�^�֐i��  | *p_tbl++;�ł��悢

	}
}