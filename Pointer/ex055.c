#include<stdio.h>
main() {
	int a[] = { 11,22,33,44,55,66 };
	float b[]={ 11.1,22.2,33.3,44.4 };
	int* pa;	//a�p�|�C���^
	float* pb;	//b�p�|�C���^
	int i, ga;	//�J�E���^�Aa���v�p
	float gb;	//b���v�p

	pa = a;		//a�̃A�h���X���
	pb = b;		//b�̃A�h���X���

	for (ga = 0, i = 0; i < 6; i++) {		//a�̍��v�N���A�A�U�񃋁[�v
		ga += *pa;							//���v�ɑ�������
		pa++;								//�|�C���^��i�߂�
	}
	printf("�z��a\t���v = %d \t����%.3f\n", ga, ga / 6.0);

	for (gb = 0, i = 0; i < 4; i++) {		//b�̍��v�N���A�A�S�񃋁[�v
		gb += *pb;							//���v�ɑ�������
		pb++;								//�|�C���^��i�߂�
	}
	printf("�z��b\t���v = %.3f \t����%.3f\n", gb, gb / 4.0);
}