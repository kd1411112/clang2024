#include<stdio.h>
#include<string.h>
#define NIN 5
struct day {
	int nen;
	int tuki;
	int hi;
};

struct profile {
	char name[20];
	struct day date;
	char blood[5];
};

main()
{
	struct profile data[NIN] = { {"A",2000,2,22,"A"},{"B",1998,9,18,"B"}, {"C",1890,7,7,"O"}, {"D",1900,12,1,"B"}, {"E",2230,2,29,"AB"}, };
	struct profile* p;
	p = data;
	int i;
	for (i = 0; i < NIN; i++) {
		if ((p+i)->date.tuki == 2) {
			printf("%s\\ %d ”N %d Œ %d “ú¶ ŒŒ‰tŒ^\ %sŒ^\n",
				(p + i)->name, (p + i)->date.nen, (p + i)->date.tuki, (p + i)->date.hi,
				(p + i)->blood);
		}
	
	}
}