#include<stdio.h>
main()
{
	int month;
	printf("月を入力 : ");
	scanf("%d", &month);

	if (month==2)
	{
		printf("最終日は28日です\n");
	}
	else
	{
		if (month==4 || month==6 || month==9 || month==11)
		{
			printf("最終日は30日です\n");
		}
		else
		{
			printf("最終日は31日です\n");
		}
	}
}