#include<stdio.h>
int main()
{
	char data1[100], data2[100];
	int i, j;
	i = 0;
	j = 0;
	printf("•¶š—ñ‚PH");
	scanf("%s", data1);
	printf("•¶š—ñ‚QH");
	scanf("%s", data2);

	while(data1[i])
	{
		i++;
	}
	while (data2[j])
	{
		data1[i+j] = data2[j];
		j++;
	}

	printf("%s", data1);
	return 0;
}