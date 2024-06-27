#include<stdio.h>
#define CNT 6
main()
{
	char* p_game[CNT] = { "wii","ds","playstation4","switch","famicom","gameboy"};
	int i;
	char** p;
	p = p_game;
	for (i = 0; i < CNT; i++) {
		printf("%s\n", *p++);
	}
}