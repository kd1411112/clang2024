#include<stdio.h>
main()
{
	int suu,c[10];
	int i,cnt;
	i = 0;
	while (1) {
		printf("整数(-999で終了)？");
		scanf("%d", &suu);
		if (suu == -999)break;
		if (i >= 10)break;
		c[i] = suu;
		i++;
		
	}
	cnt = i;
	printf("配列c = ");
	i = 0;
	for (i=0; i<cnt; i++) {
		printf(" %d", c[i]);
	}

}

//#include <stdio.h>
//
//int main() {
//    int suu, c[10];
//    int i, cnt;
//    i = 0;
//    while (1) {
//        printf("整数(-999で終了)？");
//        scanf("%d", &suu);
//        if (suu == -999) break;
//        if (i >= 10) {
//            printf("配列がいっぱいです。\n");
//            break;
//        }
//        c[i] = suu;
//        i++;
//    }
//    cnt = i;
//    printf("配列c = ");
//    for (i = 0; i < cnt; i++) {
//        printf(" %d", c[i]);
//    }
//    printf("\n");
//
//    return 0;
//}