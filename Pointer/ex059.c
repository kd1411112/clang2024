#include<stdio.h>
main()
{
	char data[1000] = "吾輩は猫である。名前はまだ無い。どこで生れたかとんと見当けんとうがつかぬ。何でも薄暗いじめじめした所でニャーニャー泣いていた事だけは記憶している。";
	char data2[1000];
	char* p_data, * p_data2;
	p_data = data;
	p_data2 = data2;
	printf("data[]=%s\n\n", p_data);
	while (*p_data2++ = *p_data++);
	p_data2 = data2;
	printf("data2[]=%s\n\n",p_data2);
	while (*p_data2) {
		putchar(*p_data2++);
	}
	putchar('\n');
}