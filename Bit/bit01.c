#include<stdio.h>
enum BitState{
	Base = 0,					//00000000	�ʏ�
	Poison = 1 << 0,			//00000001	��
	Sleep = 1 << 1,				//00000010	����
	Paralysis = 1 << 2,			//00000100	���
	Burn = 1 << 3,				//00001000	�Ώ�
	AtkUp = 1 << 4,				//00010000	�U���́���
	AtkDown = 1 << 5			//00100000	�U���́���
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);

main() {
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s) {
	printf("****���݂̏��****\n");
	if (s & Poison) {
		printf("��\n");
	}
	if (s & Sleep) {
		printf("����\n");
	}
	if (s & Paralysis) {
		printf("���\n");
	}
	if (s & Burn) {
		printf("�Ώ�\n");
	}
	if (s & AtkUp) {
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown) {
		printf("�U���̓_�E��\n");
	}
	if (s == Base) {
		printf("��ԕω��Ȃ�\n");
	}
	printf("******************\n");
	
}

void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		DisplayStatus();
		printf("���̏�Ԃ�t�^���܂����H\n");
		printf("�P�F�� �Q�F���� �R�F��� �S�F�Ώ� �T�F�U���� �U�F�U����  �O�F�I����");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:	//�P�`�U�ȊO�̒l�̎�
			break;

		}
		
	}

}

void ClearFlag(UINT* s) {
	int a;
	while (1) {
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("�P�F�� �Q�F���� �R�F��� �S�F�Ώ� �T�F�U���́� �U�F�U���́� �V�F�S���� �O�F�I���� \n");
		scanf("%d", &a);

		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;

		}
	}
}