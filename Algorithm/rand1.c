#include<stdio.h>
#include <stdlib.h> //�������g���Ƃ��ɕK�v�ł�
#include <time.h> //�������g���Ƃ��ɕK�v�ł�
main()
{
	int kazu;
	
	srand(time(0));
	kazu = rand();
	printf("������%d�ł�", kazu);
}