//queue01.c �L���[�\����{�v���O����
#include<stdio.h>

#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

//�֐��v���g�^�C�v�錾
void display(void);
int enqueue(int d);
int dequeue(int* pd);

//���C���֐�
main()
{
	int key, data, result;
	do {

		printf("\n\n���G���L���[��i�A�f�L���[��o����͂��ā�");
		key = getche();
		printf("\n");


		//�G���L���[����
		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("�������L���[�������ς��ł�������\n");
			}
			else {
				display();
			}
		}

		//�f�L���[����
		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("�������L���[����ł�������\n");
			}
			else {
				printf("�L���[����Ł[��(%d)�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}

//�L���[�\���֐�
void display(void)
{
	int i;

	printf("\n���������݂̃L���[�̓��e������\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%2d]��%5d", i, queue[i]);
		if (i == head){
			printf("��head�������Ă���Ƃ���i����head��%d�j",head);

		}
		if (i == tail) {
			printf("��tail�������Ă���Ƃ���i����tail��%d�j", tail);
		}
		printf("\n");
	}

	return;
}


//�L���[�Ƀf�[�^������i�G���L���[����j�֐�
int enqueue(int d)
{
	if ((tail + 1) % QUEUESIZE == head) { return -1; }	//�L���[�������ς��̂Ƃ�
	queue[tail] = d;
	tail++;
	tail = tail % QUEUESIZE;
	return 0;
}

//�L���[����f�[�^�����o���i�f�L���[����j�֐�
int dequeue(int* pd)
{
	if (head == tail) { return -1; }	//�L���[����̂Ƃ�
	*pd = queue[head];
	queue[head] = 0;	//�m�F���₷�����邽��
	head++;
	head = head % QUEUESIZE;
	return 0;
}