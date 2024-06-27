#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int A, num, i;
	srand(time(0)); 
	rand(); 

	A = rand() % 100 + 1;

	printf("”“–‚ÄƒQ[ƒ€\n");
	printf("1`100‚Ü‚Å‚Ì”‚ð­‚È‚¢‰ñ”‚Å“–‚Ä‚éƒQ[ƒ€\n\n");

	i = 0;

	while (1) {

		printf("”(1~100)‚ð“ü—Í:");
		scanf("%d", &num);
		i++; 

		if (A > num) {
			printf("%d‚æ‚è‘å‚«‚¢‚Å‚·\n\n", num);
		}
		else if (A < num) {
			printf("%d‚æ‚è¬‚³‚¢‚Å‚·\n\n", num);
		}
		else {
			printf("“–‚½‚è! %d‰ñ‚Å“–‚Ä‚Ü‚µ‚½\n", i);
			break;
		}
	}
}