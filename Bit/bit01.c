#include<stdio.h>
enum BitState{
	Base = 0,					//00000000	通常
	Poison = 1 << 0,			//00000001	毒
	Sleep = 1 << 1,				//00000010	眠り
	Paralysis = 1 << 2,			//00000100	麻痺
	Burn = 1 << 3,				//00001000	火傷
	AtkUp = 1 << 4,				//00010000	攻撃力↑↑
	AtkDown = 1 << 5			//00100000	攻撃力↓↓
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
	printf("****現在の状態****\n");
	if (s & Poison) {
		printf("毒\n");
	}
	if (s & Sleep) {
		printf("眠り\n");
	}
	if (s & Paralysis) {
		printf("麻痺\n");
	}
	if (s & Burn) {
		printf("火傷\n");
	}
	if (s & AtkUp) {
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown) {
		printf("攻撃力ダウン\n");
	}
	if (s == Base) {
		printf("状態変化なし\n");
	}
	printf("******************\n");
	
}

void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		DisplayStatus();
		printf("その状態を付与しますか？\n");
		printf("１：毒 ２：睡眠 ３：麻痺 ４：火傷 ５：攻撃↑ ６：攻撃↓  ０：終了＞");
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
		default:	//１〜６以外の値の時
			break;

		}
		
	}

}

void ClearFlag(UINT* s) {
	int a;
	while (1) {
		printf("どの状態を解除しますか？\n");
		printf("１：毒 ２：睡眠 ３：麻痺 ４：火傷 ５：攻撃力↑ ６：攻撃力↓ ７：全解除 ０：終了＞ \n");
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