#include<stdio.h>
struct profile_data {
	char name[20];
	int birth[3];
	char blood[5];
};

int main(void)
{
	struct profile_data profile;
	struct profile_data *p;
	p = &profile;

	printf("���O����́F");
	gets(p->name);
	printf("���N�������󔒂ŋ�؂��ē��́F");
	scanf("%d %d %d", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("���t�^����́F");
	scanf("%s", p->blood);

	printf("%s �\�\ %d �N %d �� %d ���� ���t�^�\ %s �^", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
}