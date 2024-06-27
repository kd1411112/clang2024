#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int A, num, Q, i, j;
	srand(time(0)); 
	rand(); 

	A = rand() % 300 + 1;

	printf("”“–‚ÄƒQ[ƒ€\n");
	printf("1`300‚Ü‚Å‚Ì”‚ğ­‚È‚¢‰ñ”‚Å“–‚Ä‚éƒQ[ƒ€\n\n");
	printf("‚U‰ñ‚É‚P‰ñ‚Ì•p“x‚Å‰R‚ğ‚Â‚­‚æ\n\n");
	printf("‰º‚É!‚ª•\¦‚³‚ê‚½‚ç’ˆÓI‚R•ª‚Ì‚P‚ÌŠm—¦‚Å‰R‚ğ‚Â‚¢‚Ä‚¢‚é‚æI\n\n");
	printf("777‚Æ“ü—Í‚·‚é‚Æ‘O‰ñ“ü—Í‚µ‚½‚Æ‚«‚É‰R‚ª‚Â‚©‚ê‚½‚©‚Ç‚¤‚©‚í‚©‚é‚æI\n\n");
	printf("‚½‚¾‚µ‚P‰ñ‚µ‚©g‚¦‚È‚¢‚©‚ç’ˆÓI\n\n\n");

	i = 0;
	j = 1;

	while (1) {

		printf("”(1~300)‚ğ“ü—Í:");
		scanf("%d", &num);
		i++; 

		if (num == 777) {

			if (j == 1 && Q == 6) {
				printf("‚³‚Á‚«‚Ì‚Í‰R‚¾‚Á‚½‚æI\n\n");
				j--;
			}
			else if (j == 1 && Q != 6) {
				printf("‚³‚Á‚«‚Ì‚Í–{“–‚¾‚Á‚½‚æI\n\n");
				j--;
			}
			else {
				printf("‚à‚¤g‚¦‚È‚¢‚æI\n\n");
			}
			printf("”(1~300)‚ğ“ü—Í:");
			scanf("%d", &num);
			i++;

		}
		
		Q = rand() % 6 + 1;
		
		if (Q == 6) {
			if (A > num) {
				printf("%d‚æ‚è¬‚³‚¢‚Å‚·\n\n", num);
			}
			else if (A < num) {
				printf("%d‚æ‚è‘å‚«‚¢‚Å‚·\n\n", num);
			}
			else {
				printf("“–‚½‚è! %d‰ñ‚Å“–‚Ä‚Ü‚µ‚½\n", i);
				break;
			}
		}
		else {
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
		
		if (Q % 2 == 0) {
			printf("!!!!!!!!!!!!!!!\n\n");
		}
	}
}