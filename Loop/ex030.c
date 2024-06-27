#include<stdio.h>
main() {
	int su, i, A;			//suuji,index,Answer
	printf("”‚ğ“ü‚ê‚Ä : ");
	scanf("%d", &su);
	i = 0;
	while (i <= 10) {
		A = su + i;
		printf("%d + %d = %d\n", su, i, A);
		i++;
	}
}