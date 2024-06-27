#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},
					 {40,50,60},
					 {70,80,90} };
	int* p_tbl, i;
	p_tbl = tbl[0];		//0行目の先頭アドレスを入れる
	printf("2次元配列tblの内容\n");
	for (i = 0; i < (3*3); i++) {		//i<(行×列)
		printf(" %d ", *p_tbl++);		//| printf(" %d ",*p_	\tbl);
		//↑表示した後に次のデータへ進む  | *p_tbl++;でもよい

	}
}