#include<stdio.h>
enum BitState{
	Base = 0,					//00000000	’Êí
	Poison = 1 << 0,			//00000001	“Å
	Sleep = 1 << 1,				//00000010	–°‚è
	Paralysis = 1 << 2,			//00000100	–ƒáƒ
	Burn = 1 << 3,				//00001000	‰Î
	AtkUp = 1 << 4,				//00010000	UŒ‚—Íªª
	AtkDown = 1 << 5			//00100000	UŒ‚—Í««
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
	printf("****Œ»İ‚Ìó‘Ô****\n");
	if (s & Poison) {
		printf("“Å\n");
	}
	if (s & Sleep) {
		printf("–°‚è\n");
	}
	if (s & Paralysis) {
		printf("–ƒáƒ\n");
	}
	if (s & Burn) {
		printf("‰Î\n");
	}
	if (s & AtkUp) {
		printf("UŒ‚—ÍƒAƒbƒv\n");
	}
	if (s & AtkDown) {
		printf("UŒ‚—Íƒ_ƒEƒ“\n");
	}
	if (s == Base) {
		printf("ó‘Ô•Ï‰»‚È‚µ\n");
	}
	printf("******************\n");
	
}

void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		DisplayStatus();
		printf("‚»‚Ìó‘Ô‚ğ•t—^‚µ‚Ü‚·‚©H\n");
		printf("‚PF“Å ‚QF‡–° ‚RF–ƒáƒ ‚SF‰Î ‚TFUŒ‚ª ‚UFUŒ‚«  ‚OFI—¹„");
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
		default:	//‚P`‚UˆÈŠO‚Ì’l‚Ì
			break;

		}
		
	}

}

void ClearFlag(UINT* s) {
	int a;
	while (1) {
		printf("‚Ç‚Ìó‘Ô‚ğ‰ğœ‚µ‚Ü‚·‚©H\n");
		printf("‚PF“Å ‚QF‡–° ‚RF–ƒáƒ ‚SF‰Î ‚TFUŒ‚—Íª ‚UFUŒ‚—Í« ‚VF‘S‰ğœ ‚OFI—¹„ \n");
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