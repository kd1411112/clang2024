#include<stdio.h>
main() {
	int no, i, A;
	i = 0;
	A = 0;
	no = 0;
	for (no = 0; no != -999; i++) {		//‚È‚­‚Ä‚à‰½‚Æ‚©‚È‚é‚Æ‚«‚Í‰½‚Æ‚©‚È‚é	
		printf("”‚ÍH ");
		scanf("%d", &no);
		A = A + no;
	}
	A = A + 999;
	i = i - 1;
	printf("‡Œv %d\t•½‹Ï %.2f", A,(float)A / i);
}	