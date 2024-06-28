#include<stdio.h>
main()
{
	char * p_game[3] = { "wii","ds","playstaition4" };
	int i;
	char **pp;//ダブルポインタ
	pp = p_game;//ポインタ型配列の先頭アドレスをダブルポインタに格納
	for (i = 0; i < 3; i++)
	{
		pp = &p_game[i];//pにp_gameのアドレスを入れる
		while (**pp)//\0が出てくるまでループ
		{
			printf("%c", **pp);
			(*pp)++;//アドレスを進める
		}
		printf("\n");
		
	}
}