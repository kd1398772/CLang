#include<stdio.h>
main()
{
	int en, su1, su2;
	printf("演算子を入力 : ");
	scanf("%d", &en);
	printf("2つの整数を入力 : ");
	scanf("%d %d", &su1, &su2);

	
	if (en == 1)
	{
		printf("%d", su1 + su2);
	}
	else
	{
		if (en == 2)
		{
			printf("%d", su1 - su2);
		}
		else
		{
			if (en == 3)
			{
				printf("%d", su1 * su2);
			}
			else
			{
				if (en == 4)
				{
					printf("%d", su1 / su2);
				}
				else
				{
					printf("演算子が5以上はエラー");
				}
			}
		}
	}
}