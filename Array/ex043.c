#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;

	printf("������ : %s\n", &data[0]);

	i = 0;
	while (data[i] != '\0') {
		i++;
	}
	printf("��������%d����", i);
}