#include<stdio.h>
#include<string.h>
#define NIN 5
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile data[NIN];
	struct profile* p;
	p = data;
	int i;
	for (i = 0; i < NIN ; i++) {

		printf("%d人目（名前）：", i+1);
		scanf("%s", (p + i)->name);
		printf("%d人目（生年月日）：", i+1);
		scanf("%d %d %d", &(p + i)->birth[0], &(p + i)->birth[1], &(p + i)->birth[2]);
		printf("%d人目（血液型）：", i+1);
		scanf("%s", (p + i)->blood);
		printf("―――――――――――――――――――――――\n");
	}

	for (i = 0; i < NIN ; i++) {
		if (strcmp(data[i].blood, "A") == 0) {
			printf("%s―― %d 年 %d 月 %d 日生 血液型― %s型\n", (p + i)->name, (p + i)->birth[0], (p + i)->birth[1], (p + i)->birth[2], (p+i)->blood);
		}
	}
}