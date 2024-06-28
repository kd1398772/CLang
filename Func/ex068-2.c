#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char *p;

	p = gets(dumy);//入力

	while (p != NULL)//データの終わり
		//データの入力完了 ctrl+z
	{
		
		printf("%s \n",dumy);
		p = gets(dumy);//入力
	}
}