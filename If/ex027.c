#include<stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í : ");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		printf("•ÏŠ·‚·‚é‚Æ%c", moji + 0x20);
	}
	else {
		if (moji >= 'a' && moji <= 'z') {
			printf("•ÏŠ·‚·‚é‚Æ%c", moji - 0x20);
		}
		else {
			printf("ƒGƒ‰[");
		}
	}
}
