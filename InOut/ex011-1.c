#include <stdio.h>
main()
{
	char n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
	n1 = 'A';
	n2 = 'B';
	n3 = 'C';
	n4 = 'a';
	n5 = 'b';
	n6 = 'c';
	n7 = '0';
	n8 = '1';
	n9 = '2';
	n10 = ' ';

	printf("%c : %d 0x%x  %c : %d 0x%x\n",n1,n1,n1,n2,n2,n2);
	printf("%c : %d 0x%x  %c : %d 0x%x\n",n3,n3,n3,n4,n4,n4);
	printf("%c : %d 0x%x  %c : %d 0x%x\n",n5,n5,n5,n6,n6,n6);
	printf("%c : %d 0x%x  %c : %d 0x%x\n",n7,n7,n7,n8,n8,n8);
	printf("%c : %d 0x%x  %c : %d 0x%x\n",n9,n9,n9,n10,n10,n10);
}