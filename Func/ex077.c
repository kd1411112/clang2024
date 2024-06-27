#include<stdio.h>
void hantei(int n1, int n2, int n3, int *max,int *min);

main() {
	int	a, b, c, max, min;

	printf("®”‚ð‚R‚Â“ü—ÍF");
	scanf("%d %d %d", &a, &b, &c);

	hantei(a, b, c, &max, &min);

	printf("Å‘å‚Í %d Å¬‚Í %d	", max, min);
}

void hantei(int n1, int n2, int n3, int* max, int* min) {

	*max = n1;
	if (n2 > *max) {
		*max = n2;
	}
	if (n3 > *max) {
		*max = n3;
	}

	*min = n1;
	if (n2 < *min) {
		*min = n2;
	}
	if (n3 < *min) {
		*min = n3;
	}

	return;
}
