#include <stdio.h>					
main()								
{									
	int a = 5;	//宣言の時に初期化することができる
	float b;						
	printf(" a / 2 = %d \n", a / 2);		//整数型同氏の徐算は小数点以下が切り捨てられる。	
	b = a / 2;	
	printf(" a / 2 = %f \n",b);				//小数点以下を扱う場合
	printf(" a/ 2 = %f \n", a / 2.0);
 }