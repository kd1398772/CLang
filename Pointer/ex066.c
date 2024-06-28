#include<stdio.h>
main()
{
	char * p_game[3] = { "wii","ds","playstaition4" };
	int i;
	char **pp;//ダブルポインタ
	pp = p_game;//ポインタ型配列の先頭アドレスをダブルポインタに格納
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", *pp++);
	}
}