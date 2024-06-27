#include<stdio.h>
main()
{
	char head;

	printf("アルファベット？");
	scanf("%c", &head);

	switch (head)
	{
	case 'a':
		printf("America\nAustralia\n");
		break;

	case 'A':
		printf("America\nAustralia\n");
		break;

	case 'e':
		printf("England\n");
		break;

	case 'E':
		printf("England\n");
		break;

	case 'f':
		printf("France\n");
		break;

	case 'F':
		printf("France\n");
		break;

	case 'j':
		printf("Japan\n");
		break;

	case 'J':
		printf("Japan\n");
		break;
	}
}