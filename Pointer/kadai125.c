#include<stdio.h>
main()
{
	int i,data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* pdata;
	pdata = data;
	
	printf("ポインタを固定で表示\n");
	printf("配列 data[] = ");
	for (i = 0; *(pdata + i) != -999; i++) {
		printf("%d, ", *(pdata + i));
	}
	printf("\b\b  \n");


	printf("ポインタを変化させて表示\n");
	printf("配列 data[] = ");

	while (*pdata != -999) {
		printf("%d, ", *pdata);
		pdata++;
	}

	printf("\b\b  ");
}