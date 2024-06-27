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

	printf("–¼‘O‚ð“ü—ÍF");
	gets(p->name);
	printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—ÍF");
	scanf("%d %d %d", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("ŒŒ‰tŒ^‚ð“ü—ÍF");
	scanf("%s", p->blood);

	printf("%s \\ %d ”N %d ŒŽ %d “ú¶ ŒŒ‰tŒ^\ %s Œ^", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
}