#include<stdio.h>
void reverse(char* p_str1, char* p_str2);

main()
{
	char str1[256], str2[256];
	int cnt;

	printf("•¶š—ñHF");
	scanf("%s", &str1);

	reverse(str1, str2);

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

}

//ŠÖ”’è‹`
void reverse(char* p_str1, char* p_str2)
{
	int cnt;
	for (cnt = 0; *p_str1 != '\0'; cnt++, p_str1++);
	p_str1--;
	cnt--;

	while (cnt >= 0) {
		*p_str2 = *p_str1;
		p_str2++;
		p_str1--;
		cnt--;
		
	}
	*p_str2 = '\0';

	return;
}