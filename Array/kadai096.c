#include<stdio.h>
main()
{
	int suu,c[10];
	int i,cnt;
	i = 0;
	while (1) {
		printf("����(-999�ŏI��)�H");
		scanf("%d", &suu);
		if (suu == -999)break;
		if (i >= 10)break;
		c[i] = suu;
		i++;
		
	}
	cnt = i;
	printf("�z��c = ");
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
//        printf("����(-999�ŏI��)�H");
//        scanf("%d", &suu);
//        if (suu == -999) break;
//        if (i >= 10) {
//            printf("�z�񂪂����ς��ł��B\n");
//            break;
//        }
//        c[i] = suu;
//        i++;
//    }
//    cnt = i;
//    printf("�z��c = ");
//    for (i = 0; i < cnt; i++) {
//        printf(" %d", c[i]);
//    }
//    printf("\n");
//
//    return 0;
//}