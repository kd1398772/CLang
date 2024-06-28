#include<stdio.h>
main()
{
	int num,i=0,j;

	printf("数は : ");
	scanf("%d", &num);
	do
	{
		j = 0;//ループの前にカウンタを初期化
		do
		{	//空白出力
			printf(" ");
			j++;
		} while (j < num - i);
		j = 0;//ループの前にカウンタを初期化
		do
		{	//*出力
			printf("*");
			j++;
		} while (j < i + 1);
		printf("\n");
			i++;
	} while (i < num);
}