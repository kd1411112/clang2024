#include<stdio.h>
typedef struct {
	char Wname[20];
	int bullet;
	float atk;
}Weapon;

typedef struct {
	char name[20];
	int hp;
	char remarks[264];
	Weapon wpn;
}Soldier;

void SetInfo(Soldier* s, char* filename);
void Display (Soldier s);

main()
{
	Soldier sol;
	SetInfo(&sol, "file03.txt");
	Display(sol);
}

void SetInfo(Soldier* s, char* filename) {
	FILE* fp;
	if (fp = fopen(filename, "r")){
		fscanf(fp, "%s%d%s%d%f%s", s->name, &s->hp,
			s->wpn.Wname,&s->wpn.bullet, &s->wpn.atk,s->remarks);
		fclose(fp);
	}
	else {
		printf("ファイルが読み込めません\n");
	}
}

void Display(Soldier s) {
	printf("名前:%s 体力:%d\n", s.name, s.hp);
	printf("武器:%s 残段数:%d 攻撃力:%.2f\n", 
		s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
	printf("備考:%s\n", s.remarks);
}