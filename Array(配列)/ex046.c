#include<stdio.h>
main()
{
	int i, j, gokei;
	int a[][3] = { {10,20,30}, { 1,2,3 } };
	
	//行の処理
	for (i = 0; i <= 1; i++)
	{
		//列の処理
		for (gokei = 0, j = 0; j <= 2; j++)
		{
			printf("a[%d][%d]=%d\n", i,j, a[i][j]);
			gokei += a[i][j];
		}
		printf("%d行目の合計 = %d\n\n", i, gokei);
	}
}