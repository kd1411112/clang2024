#include<stdio.h>
main()
{
	char data[1000] = "��y�͔L�ł���B���O�͂܂������B�ǂ��Ő��ꂽ���Ƃ�ƌ�������Ƃ������ʁB���ł����Â����߂��߂������Ńj���[�j���[�����Ă����������͋L�����Ă���B";
	char data2[1000];
	char* p_data, * p_data2;
	p_data = data;
	p_data2 = data2;
	printf("data[]=%s\n\n", p_data);
	while (*p_data2++ = *p_data++);
	p_data2 = data2;
	printf("data2[]=%s\n\n",p_data2);
	while (*p_data2) {
		putchar(*p_data2++);
	}
	putchar('\n');
}