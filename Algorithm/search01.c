#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int data[10], i, s;
	
	srand(time(0));
	for (i = 0; i < 10; i++) {
		data[i] = rand() % 30 + 1;
	}

	printf("’Tõ’l‚ð“ü—Í:");
	scanf("%d", &s);

	for (i = 0; i < 10; i++) {
		if (s == data[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else {
		printf("%d”Ô–Ú‚ÉŒ©‚Â‚©‚è‚Ü‚µ‚½", i);
	}
}