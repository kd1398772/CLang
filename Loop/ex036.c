#include<stdio.h>
main()
{
	int i;
	printf("break test program\n");
	for (i = 1; i <= 10; i++)
	{
		if (i == 7)//iが7になったら処理を終わる
		{
			break;
		}
		printf("%3d", i);
	}

	printf("\n\ncontinue test program\n ");
	for (i = 1; i <= 10; i++)
	{
		if (i == 7)//iが7になったらその処理を飛ばす
		{
			continue;
		}
		printf("%3d", i);//%3dは3文字分のスペースを開ける
	}
}