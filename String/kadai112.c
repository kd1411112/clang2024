#include<stdio.h>
int main()
{
	char data1[20] = "kakigori", data2[20];
	int i;
	i = 0;
	while (data1[i]) {
		data2[i] = data1[i];
		i++;
	}
	data2[i] = '\0';
	printf("(コピー元)配列 data1[] =%s\n",data1);
	printf("(コピー先)配列 data2[] =%s\n",data2);

	return 0;
}